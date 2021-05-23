# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/23 11:50:05 by malaoui           #+#    #+#              #
#    Updated: 2021/05/23 11:50:06 by malaoui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= replace

SRC= replace.cpp main.cpp

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: clean all

.PHONY:  clean re fclean
