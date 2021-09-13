# include "Intern.hpp"
# include <map>

Intern::Intern()
{
}

Form *createPpf( std::string target ) {
    
    std::cout << "Intern creates Presidential Pardon Form" << std::endl;

    return (new PresidentialPardonForm(target));
}

Form *createRrf( std::string target ) {

    std::cout << "Intern creates Robotomy Request Form" << std::endl;
    return (new RobotomyRequestForm(target));
}

Form *createSrf( std::string target ) {

    std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
    return (new ShrubberyCreationForm(target));
}

Intern::~Intern()
{
    

}


Form *Intern::makeForm( std::string name, std::string target ) {

    Form *f = NULL;
    Form *(*r)(std::string t);
    r = ((name == "robotomy request") ? &createRrf : (name == "shrubbery creation" ? &createSrf : (name == "presidential pardon" ? &createPpf : NULL)));
    f = (r == NULL) ? NULL : r(target);
    std::cout << ((f == NULL) ? "Error While making Form\n" : "");
    
    return f;
}