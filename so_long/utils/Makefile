# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calmouht <calmouht@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 02:28:21 by calmouht          #+#    #+#              #
#    Updated: 2023/05/07 06:34:20 by calmouht         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = utils.a

SRCS =  ft_bzero.c ft_isalpha.c ft_isanlum.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strlcpy.c ft_strlen.c ft_tolower.c \
		ft_toupper.c ft_atoi.c ft_strlcat.c \
		ft_memcpy.c ft_memcmp.c ft_memchr.c \
		ft_strnstr.c ft_strchr.c ft_strncmp.c \
		ft_calloc.c ft_strrchr.c ft_substr.c \
		ft_strtrim.c ft_strmapi.c ft_strjoin.c \
		ft_striteri.c ft_split.c ft_itoa.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_strdup.c \
		ft_printf.c ft_putchar.c ft_putstr.c \
	  	ft_putnbr.c ft_uputnbr.c ft_hexadecimal.c \
	  	ft_chhex.c get_next_line.c get_next_line_utils.c \

OBJECTS = ${SRCS:.c=.o}

HEADERS = /utils/utils.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRCS) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf ${OBJECTS}

fclean:clean
	rm -f $(NAME)

re:fclean all
