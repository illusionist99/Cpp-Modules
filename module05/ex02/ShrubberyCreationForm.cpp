#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{

// 	std::ofstream myFile(target + "_shrubbery");


// 	myFile << "
// 		W
//        WWW
//        WWW
//       WWWWW
// W     WWWWW     W
// WWW   WWWWW   WWW
//  WWW  WWWWW  WWW
//   WWW  WWW  WWW
//    WWW WWW WWW
//      WWWWWWW
//   WWWW  |  WWWW
//         |
//         |
// ";

// 	myFile.close();
}

// ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src )
// {
// }


void		ShrubberyCreationForm::action(Form const & f) const {

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */