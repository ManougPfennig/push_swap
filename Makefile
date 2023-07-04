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

SRCS = ./main.c ./sources/functions/error_free.c \
./sources/functions/create_list.c ./sources/functions/ft_atoil.c \
./sources/functions/ft_strjoin_free.c ./sources/functions/ft_lstnew_int.c

CFLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	make -C ./sources/ft_printf
	make bonus -C ./sources/libft
	gcc ${CFLAGS} ${OBJS} ./sources/ft_printf/libftprintf.a ./sources/libft/libft.a -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS} ${BONUS}
	make clean -C ./sources/ft_printf
	make clean -C ./sources/libft

fclean: clean
	rm -f ${NAME}
	make clean -C ./sources/ft_printf
	make clean -C ./sources/libft

re: fclean all
	make fclean -C ./sources/ft_printf
	make fclean -C ./sources/libft