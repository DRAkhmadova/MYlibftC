# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bneucar <bneucar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 19:24:36 by bneucar           #+#    #+#              #
#    Updated: 2021/10/12 17:13:48 by bneucar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(shell find . -name "*.c")

GCC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror -I.

.PHONY:		all clean fclean re 

OBJ = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c 
	gcc $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all
