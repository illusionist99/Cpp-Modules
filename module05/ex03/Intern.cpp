# include "Intern.hpp"
# include <map>

Intern::Intern()
{
}

Form *createPpf( std::string target ) {

    return (new PresidentialPardonForm(target));
}

Form *createRrf( std::string target ) {

    return (new RobotomyRequestForm(target));
}

Form *createSrf( std::string target ) {

    return (new ShrubberyCreationForm(target));
}

Intern::~Intern()
{
    

}

Form    *

struct mapping {

    Form *f = NULL;
}


Form *Intern::makeForm( std::string name, std::string target ) {

    Form *f = NULL;
    std::map<const std::string, Form *(*)(std::string t)> m;
    m["robotomy request"] =  &createRrf;
    m["shrubbery creation"] = &createSrf;
    m["presidential pardon"] = &createPpf;

    std::cout << " Recieved " << name << " and " << target << std::endl;
    
    std::cout << m.find(name);
    m.find(name) == m.end() ?
    try
    {
        
        return (m[name](target));
    }
    catch(std::out_of_range)
    {
       // std::cerr << e.what() << '\n';
    }
    
    return f;
}