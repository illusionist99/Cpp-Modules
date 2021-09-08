# include "Bureaucrat.hpp"
# include "Form.hpp"

int     main( void ) {

    try {

        // Test Bureaucrat
        Bureaucrat n("test", 1);
        std::cout << n;
        std::cout << "decrement" << std::endl;
        n.decrementGrade();
        std::cout << n;
        std::cout << "encrement" << std::endl;
        n.incrementGrade();
        std::cout << n;
        std::cout << n.getGrade() << n.getName() << std::endl;
        
        // Test Form
        Form covid("covid", 1, 1);
        std::cout << "Name is " << covid.getName() << std::endl;
        std::cout << "Sign is " << covid.getSign() << std::endl;
        std::cout << "Grade To Execute " << covid.getGradeToExecute() << std::endl;
        std::cout << "Grade To sign " << covid.getGradeToSign() << std::endl;
        Form coo("coo", 2, 2);
    
        std::cout << covid;
        
        coo.beSigned(n);
        covid.beSigned(n);
    
        std::cout << covid;
        covid.beSigned(n);



        covid.
    }
    catch (std::exception & e) {
        
       std::cout << e.what() << std::endl;
    }
    return (0);
}