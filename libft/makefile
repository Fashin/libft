# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 15:48:58 by cbeauvoi          #+#    #+#              #
#    Updated: 2016/11/06 18:25:36 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = main ft_tolower ft_toupper ft_isprint ft_isascii \
		   ft_isalpha ft_isdigit ft_isalnum ft_atoi ft_strcmp \
		   ft_strncmp ft_strstr ft_strnstr ft_strlen ft_strchr \
		   ft_strrchr ft_strcat ft_strncat ft_strlcat ft_memalloc \
		   ft_strcpy ft_strncpy ft_strdup ft_memset ft_bzero \
		   ft_memcpy

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
