#include "Bureaucrat.hpp"

int     main( void ) {

    try {

        Bureaucrat n("test", 1);
        std::cout << n;
        std::cout << "decrement" << std::endl;
        n.decrementGrade();
        std::cout << n;
        std::cout << "encrement" << std::endl;
        n.incrementGrade();
        std::cout << n;
        std::cout << n.getGrade() << n.getName() << std::endl;
    }
    catch (std::exception & e) {
        
       std::cout << e.what() << std::endl;
    }


    return (0);
}