# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 16:48:47 by calmouht          #+#    #+#              #
#    Updated: 2023/04/15 03:05:49 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putstr.c \
	  ft_putnbr.c ft_uputnbr.c ft_hexadecimal.c \
	  ft_chhex.c \

OBJECTS = ${SRCS:.c=.o}

HEADERS = /ft_printf.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c -O $(FLAGS) $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean:clean
	rm -f $(NAME)

re:fclean all
