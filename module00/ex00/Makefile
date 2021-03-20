NAME= megaphone

SRC= megaphone.cpp

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) megaphone.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all

.PHONY:  clean re
