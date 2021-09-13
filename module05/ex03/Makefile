NAME = Forms

SRC = main.cpp\
	  Bureaucrat.cpp\
	  Form.cpp\
	  PresidentialPardonForm.cpp\
	  RobotomyRequestForm.cpp\
	  ShrubberyCreationForm.cpp\
	  Intern.cpp

all: $(NAME)

$(NAME) : 
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)


clean:
	rm -rf $(NAME)

fclean : clean

re : fclean all

.PHONY: all clean re fclean