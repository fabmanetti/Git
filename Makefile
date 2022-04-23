# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmanetti <fmanetti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 17:50:17 by fmanetti          #+#    #+#              #
#    Updated: 2022/04/23 20:48:29 by fmanetti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

FILES			=	ft_atoi.c			\
					ft_bzero.c			\
					ft_calloc.c			\
					ft_isalnum.c		\
					ft_isalpha.c		\
					ft_isascii.c		\
					ft_isdigit.c		\
					ft_isprint.c		\
					ft_isspace.c		\
					ft_itoa.c			\
					ft_memccpy.c		\
					ft_memchr.c			\
					ft_memcmp.c			\
					ft_memcpy.c			\
					ft_memmove.c		\
					ft_memset.c			\
					ft_putchar.c		\
					ft_putchar_fd.c		\
					ft_putendl_fd.c		\
					ft_putnbr.c			\
					ft_putnbr_fd.c		\
					ft_putstr.c			\
					ft_putstr_fd.c		\
					ft_split.c			\
					ft_strcat.c			\
					ft_strchr.c			\
					ft_strcmp.c			\
					ft_strcpy.c			\
					ft_strdup.c			\
					ft_strjoin.c		\
					ft_strlcat.c		\
					ft_strlcpy.c		\
					ft_strlen.c			\
					ft_strmapi.c		\
					ft_strncat.c		\
					ft_strncmp.c		\
					ft_strncpy.c		\
					ft_strnstr.c		\
					ft_strrchr.c		\
					ft_strstr.c			\
					ft_strtrim.c		\
					ft_substr.c			\
					ft_tolower.c		\
					ft_toupper.c
FILES_PATH		=	./srcs/

BFILES			=	ft_lstnew.c			\
					ft_lstadd_front.c	\
					ft_lstsize.c		\
					ft_lstlast.c		\
					ft_lstadd_back.c	\
					ft_lstdelone.c		\
					ft_lstclear.c		\
					ft_lstiter.c		\
					ft_lstmap.c
BFILES_PATH		=	./srcs_bonus/

CFILES			=	ft_arrlen.c			\
					ft_atof.c			\
					ft_free_array.c		\
					ft_memalloc.c		\
					ft_memdel.c			\
					ft_merge.c			\
					ft_print_array.c	\
					ft_sort_array.c		\
					ft_strjoin_ln.c		\
					ft_strjoin_nl.c		\
					ft_swap.c			\
					get_next_line.c
CFILES_PATH		=	./srcs_custom/

HFILES			=	libft.h
HFILES_PATH		=	./

CSOURCE			=	$(addprefix $(CFILES_PATH), $(CFILES))
SOURCE			=	$(addprefix $(FILES_PATH), $(FILES)) $(CSOURCE)
BSOURCE			=	$(addprefix $(BFILES_PATH), $(BFILES))
HEADERS			=	$(addprefix $(HFILES_PATH), $(HFILES))

OBJ				=	$(SOURCE:%.c=%.o)
OBJB			=	$(BSOURCE:%.c=%.o)

CC				= 	clang

CFLAGS			=   -I $(HFILES_PATH) -Wall -Wextra -Werror
FSANITIZE		= 	-g3 -O0 -fsanitize=address

RED				=	\033[0;31m
GREEN			=	\033[0;32m
RESET			=	\033[0m

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@printf "[ $(NAME) ] Creating...\r"
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@printf "$(GREEN)"
	@printf " ___        __         ___  __       \n"
	@printf "/\_ \    __/\ \      /'___\/\ \__    \n"
	@printf "\//\ \  /\_\ \ \____/\ \__/\ \ ,_\   \n"
	@printf "  \ \ \ \/\ \ \ '__'\ \ ,__\\\\\ \ \/   \n"
	@printf "   \_\ \_\ \ \ \ \_\ \ \ \_/ \ \ \_  \n"
	@printf "   /\____\\\\\ \_\ \_,__/\ \_\   \ \__\ \n"
	@printf "   \/____/ \/_/\/___/  \/_/    \/__/ \n"
	@printf "$(RESET)"
	@printf " ___         __                     _   _   _  \n"
	@printf "| _ )_  _   / _|_ __  __ _ _ _  ___| |_| |_(_) \n"
	@printf "| _ \ || | |  _| '  \/ _' | ' \/ -_)  _|  _| | \n"
	@printf "|___/\_, | |_| |_|_|_\__,_|_||_\___|\__|\__|_| \n"
	@printf "     |__/                                      \n"

bonus: all $(OBJB)
	@ar rc $(NAME) $(OBJB)
	@ranlib $(NAME)
	@printf "[ $(NAME) + bonus ] Created $(GREEN)Successfully\n$(RESET)" $(SUCCESS)

clean:
	@/bin/rm -f $(OBJ) $(OBJB)
	@printf "Object files $(RED)removed\n$(RESET)"

fclean: clean
	@/bin/rm -f $(NAME)
	@printf "[ $(NAME) ] $(RED)removed\n$(RESET)"

re: fclean all

.PHONY: all bonus clean fclean re

.SILENT:
