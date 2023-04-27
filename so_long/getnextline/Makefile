# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 17:56:01 by calmouht          #+#    #+#              #
#    Updated: 2023/04/26 18:00:40 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = getnextline.a

SRCS =  get_next_line.c get_next_line_utils.c \

OBJECTS = ${SRCS:.c=.o}

HEADERS = libft.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): ${OBJECTS}
#	gcc -c $(FLAGS) $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf ${OBJECTS}

fclean:clean
	rm -f $(NAME)

re:fclean all
