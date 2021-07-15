#include "Bureaucrat.hpp"

int     main( void ) {

    try {

        Bureaucrat n("test", 1);
        //n.decrementGrade();
        n.incrementGrade();
        std::cout << n;
    }
    catch (std::exception & e) {
        
       std::cout << e.what() << std::endl;
    }
    return (0);
}