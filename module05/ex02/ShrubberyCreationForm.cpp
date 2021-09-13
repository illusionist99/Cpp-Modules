#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

}

void		ShrubberyCreationForm::action(Form const & f) const {


	std::ofstream myFile(f.getName() + "_shrubbery");

	myFile << 
	"			W"
	"	       WWW"
	"	       WWW"
	"	      WWWWW"
	"	W     WWWWW     W"
	"	WWW   WWWWW   WWW"
	"	 WWW  WWWWW  WWW"
	"	  WWW  WWW  WWW"
	"	   WWW WWW WWW"
	"	    WWWWWWWWW"
	"	  WWWW  |  WWWW"
	"	        |"
	"	        |";

	myFile.close();

}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& e) {

	(void )e;
	return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

