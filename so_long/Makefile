# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/15 02:53:36 by calmouht          #+#    #+#              #
#    Updated: 2023/04/26 20:33:32 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = soo_long

NAME_EXE = so_long

CC = CC

CFLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

PRINTF = ./printf/libftprintf.a

GNL = ./getnextline/getnextline.a

DOCS = -lmlx -framework OpenGL -framework AppKit

SRCS = so_long_main.c render.c map_chacker.c errors.c
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: all

all: ${OBJECTS}
	make -C printf
	make -C getnextline
	make -C libft
	${CC} ${CFLAGS} ${OBJECTS} ${SRCS} ${LIBFT} ${GNL} ${PRINTF} ${DOCS} -o ${NAME_EXE}

clean:
	make -C printf clean
	make -C getnextline clean
	make -C libft clean
	rm -rf ${OBJECTS}

fclean:
		make -C printf fclean
	make -C getnextline fclean
	make -C libft fclean
	rm -rf ${NAME_EXE}

re: fclean all
