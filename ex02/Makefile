# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/14 05:35:35 by rrajaobe          #+#    #+#              #
#    Updated: 2022/07/14 22:25:36 by rrajaobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = 	now_we_re_talkin

SRC = 	main.cpp \
		./classes/Fixed.cpp
	
OBJ = $(SRC: .c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
		rm -f *.o
		rm -f ./src/*.o

fclean: clean
		rm -f $(NAME)

re: fclean all