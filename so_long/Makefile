# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 17:15:44 by calmouht          #+#    #+#              #
#    Updated: 2023/05/08 02:34:44 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

GCC = -Wall -Werror -Wextra

MLX = -lmlx -framework OpenGL -framework AppKit

SRCS = checker.c errors.c main.c render.c keys.c path.c draw.c \

OBJECTS = ${SRCS:.c=.o}

UTILS = ./utils/utils.a

all : ${NAME}

${NAME} : ${OBJECTS}
	make all -C ./utils/
	${CC} ${GCC} ${UTILS} ${MLX} ${SRCS} -o ${NAME}

clean:
	make clean -C ./utils/
	rm -rf $(OBJECTS)

fclean: clean
	make fclean -C ./utils/
	rm -rf so_long
	rm -rf $(UTILS)

re: fclean all
