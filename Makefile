# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oupside <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/25 18:35:42 by oupside           #+#    #+#              #
#    Updated: 2021/10/25 18:35:54 by oupside          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a

SRCS		= $(shell find . -name "*.c")

CC			= gcc

RM			= rm -f

HEADER		= libft.h

CFLAGS		= -Wall -Wextra -Werror -I$(HEADER)

.PHONY:		all clean fclean re

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
