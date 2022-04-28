# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 02:19:07 by lucperei          #+#    #+#              #
#    Updated: 2022/04/28 01:49:35 by lucperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -I./ -c

.PHONY: all clean fclean re

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_split.c\
ft_calloc.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_itoa.c\
ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_toupper.c\
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c\

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

AR = ar rc

CC = gcc

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRC)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

bonus:
		$(CC) $(FLAGS) $(SRC_BONUS)
		$(AR) $(NAME) $(OBJS_BONUS)

clean: 
		rm -f $(OBJS_BONUS) $(OBJS)
		
fclean: clean
		rm -f $(NAME)

re: fclean all
