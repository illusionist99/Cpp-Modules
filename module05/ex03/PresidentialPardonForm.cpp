#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form(target , 25, 5)
{
}


void		PresidentialPardonForm::action(Form const & f) const {

	std::cout <<  f.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;

}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

