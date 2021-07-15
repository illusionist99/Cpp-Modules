#include "Form.hpp"

Form::Form()
{
}

Form::~Form()
{
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}
