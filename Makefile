#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 13:49:45 by mapfenni          #+#    #+#              #
#    Updated: 2023/05/30 19:41:04 by marvin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

SRCS = ./sources/functions/argparsing.c ./sources/functions/error_msg.c \
./sources/functions/ft_atoidouble.c ./sources/functions/ft_lstadd_back.c \
./sources/functions/ft_lstnew.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	make -C ./sources/ft_printf
	gcc ${CFLAGS} ${OBJS} ./sources/ft_printf/libftprintf.a -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS} ${BONUS}
	make clean -C ./sources/ft_printf

fclean: clean
	rm -f ${NAME}
	make clean -C ./sources/ft_printf

re: fclean all
	make fclean -C ./sources/ft_printf