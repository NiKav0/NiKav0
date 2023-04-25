# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 07:58:56 by calmouht          #+#    #+#              #
#    Updated: 2023/02/27 08:37:14 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=minitalk

NAME_CLT=client
NAME_SRV=server

FILES_CLT=client.c 
FILES_SRV=server.c

OBJ_CLT=${FILES_CLT:.c=.o}
OBJ_SRV=${FILES_SRV:.c=.o}

CC=cc

CFLAGS=-Wall -Werror -Wextra

LIBFT=./libft/libft.a

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: all

all: ${OBJ_CLT} ${OBJ_SRV}
	make all -C ./libft/
	${CC} ${CFLAGS} ${OBJ_CLT} ${LIBFT} -o ${NAME_CLT}
	${CC} ${CFLAGS} ${OBJ_SRV} ${LIBFT} -o ${NAME_SRV}

clean:
	make clean -C ./libft/
	rm -rf *.o

fclean: clean
	rm -rf ${NAME_CLT} ${NAME_SRV}

re: fclean all