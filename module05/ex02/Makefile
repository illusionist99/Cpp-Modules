NAME = Form

SRC = main.cpp\
	  Bureaucrat.cpp\
	  Form.cpp

all: $(NAME)

$(NAME) : 
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)


clean:
	rm $(NAME)

fclean : clean

re : fclean all

.PHONY: all clean re fclean