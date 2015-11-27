# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:19:31 by fsimmet           #+#    #+#              #
#    Updated: 2015/11/26 17:13:54 by kvignau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putchar_fd.c ft_strlcat.c ft_atoi.c ft_strstr.c ft_strnstr.c ft_strrchr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strcmp.c ft_strncmp.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strchr.c ft_strcat.c ft_strncat.c ft_strlen.c
SRCO = $(SRC:.c=.o)
HEADERS = .
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(SRCO)
	ar rc $@ $^
	ranlib $@

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

.PHONY: re clean fclean all
