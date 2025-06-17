# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkorpela <kkorpela@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/21 19:51:52 by kkorpela          #+#    #+#              #
#    Updated: 2025/04/30 16:22:32 by kkorpela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_tolower.c ft_toupper.c ft_isalpha.c \
	ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c \
	ft_strlcpy.c ft_strlen.c ft_strlcat.c ft_strdup.c \
	ft_strncmp.c ft_strnstr.c ft_strchr.c ft_strrchr.c \
	ft_memset.c ft_memcpy.c ft_memcmp.c ft_memchr.c \
	ft_memmove.c ft_bzero.c ft_calloc.c ft_substr.c \
	ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	ft_putendl_fd.c ft_split.c ft_striteri.c ft_strmapi.c \
	ft_strjoin.c ft_strtrim.c


OBJS = $(SRCS:.c=.o)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
