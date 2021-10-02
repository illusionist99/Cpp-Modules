NAME= Iter

SRC = main.cpp

all: $(NAME)

$(NAME) : 
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

clean : fclean

re: fclean all

.PHONY: fclean clean re 
