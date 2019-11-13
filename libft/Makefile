# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanetti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:50:17 by fmanetti          #+#    #+#              #
#    Updated: 2019/11/12 13:02:03 by fmanetti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c

OBJ = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
	ft_memchr.o  ft_memcmp.o ft_strlen.o ft_isalpha.o ft_isdigit.o \
	ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o \
	ft_strchr.o ft_strrchr.o ft_strncmp.o ft_strlcpy.o ft_strlcat.o \
	ft_strnstr.o ft_atoi.o ft_calloc.o

all: $(NAME) $(SOURCE)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SOURCE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
