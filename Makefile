# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mapfenni <mapfenni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 23:03:15 by mapfenni          #+#    #+#              #
#    Updated: 2023/08/12 23:03:15 by mapfenni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = ./main.c ./sources/functions/error_free.c \
./sources/functions/create_list.c ./sources/functions/ft_atoil.c \
./sources/functions/ft_strjoin_free.c ./sources/functions/ft_lstnew_int.c \
./sources/cmd/push.c ./sources/cmd/reverse_rotate.c ./sources/cmd/rotate.c \
./sources/cmd/swap.c ./sources/functions/create_piles.c \
./sources/functions/ft_lstdel_last.c ./sources/functions/small_list.c \
./sources/functions/check_order.c ./sources/functions/biggest_smallest.c \
./sources/functions/radix.c

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