# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamatha <hsamatha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 17:38:44 by hsamatha          #+#    #+#              #
#    Updated: 2021/06/09 17:07:20 by hsamatha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c\
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c\
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
		ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_toupper.c ft_tolower.c\
		ft_substr.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_split.c\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstadd_back.c ft_lstnew.c ft_lstsize.c

SRCOBJ	= $(patsubst %.c,%.o,$(SRC))

HEADERS	= libft.h

FLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

MLB		= ar rc

CC		= gcc

all: $(NAME)

$(NAME): $(SRCOBJ)
	$(MLB) $(NAME) $(SRCOBJ)

%.o: %.c $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(SRCOBJ)
 
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean
