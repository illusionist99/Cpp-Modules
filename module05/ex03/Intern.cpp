# include "Intern.hpp"

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



Intern::Intern(const Intern &obj) {


}

Intern Intern::operator=(const Intern &obj) {

    return (*this);
}

Form *Intern::makeForm( std::string name, std::string target ) {

    std::string     types[3];
    Form            *((*r[3])(std::string t));
    
    int i;

    i = 0;
    
    types[0] = "robotomy request";
    types[1] = "shrubbery creation";
    types[2] = "presidential pardon";
    
    r[0] = &createRrf;
    r[1] = &createSrf;
    r[2] = &createPpf;
    
    while (i < 3) {
        if (name == types[i])
            return (r[i](target));
        i++;
    }

    std::cout <<  "Error While making Form\n";
    
    return (NULL);
}