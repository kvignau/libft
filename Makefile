# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsimmet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/25 12:19:31 by fsimmet           #+#    #+#              #
#    Updated: 2015/11/30 17:05:52 by kvignau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strmapi.c ft_strmap.c ft_striteri.c ft_striter.c ft_strequ.c ft_strnequ.c ft_strtrim.c ft_strjoin.c ft_nbwords.c ft_strsplit.c ft_strsub.c ft_itoa.c ft_memcmp.c ft_strdel.c ft_strnew.c ft_memdel.c ft_memalloc.c ft_strclr.c ft_putstr_fd.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putchar_fd.c ft_strlcat.c ft_atoi.c ft_strstr.c ft_strnstr.c ft_strrchr.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strcmp.c ft_strncmp.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strchr.c ft_strcat.c ft_strncat.c ft_strlen.c
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
