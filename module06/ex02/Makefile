NAME= Identify

SRC = main.cpp\
	  Base.cpp


all: $(NAME)

$(NAME):
	clang++ -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re