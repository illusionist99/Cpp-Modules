NAME=	phone_book

SRC=	phone_book.cpp \
		contact_utils.cpp

FLAGS=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re:	clean all

.PHONY:	clean re
