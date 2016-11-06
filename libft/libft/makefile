# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 15:48:58 by cbeauvoi          #+#    #+#              #
#    Updated: 2016/11/06 14:02:21 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = main ft_tolower ft_toupper ft_isprint ft_isascii \
		   ft_isalpha ft_isdigit ft_isalnum ft_atoi ft_strcmp \
		   ft_strncmp

FILE = $(SRC_NAME:=.c)

OBJ_NAME = $(FILE:.c=.o)

NAME = a.out

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(FILE)
	gcc $(OBJ_NAME) -o $@

clean:
	rm -fv $(OBJ_NAME)

fclean: clean
	rm -fv $(NAME)

re: fclean all
