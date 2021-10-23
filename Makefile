# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oupside <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 19:46:39 by oupside           #+#    #+#              #
#    Updated: 2021/10/23 19:46:45 by oupside          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME		= libft.a

SRCS		= $(shell find . -name "*.c")

GCC			= gcc

HEADER		= libft.h

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I$(HEADER)

OBJ = $(SRCS:.c=.o)

.PHONY:		all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o : %.c $(HEADER)
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all