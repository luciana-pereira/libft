# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucperei <lucperei@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 02:19:07 by lucperei          #+#    #+#              #
#    Updated: 2022/05/16 18:52:42 by lucperei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror -I./ -c

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_split.c ft_strncpy.c\
ft_atoll.c ft_calloc.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_itoa.c ft_strcpy.c\
ft_atof.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_toupper.c ft_strcat.c\
ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_isspace.c\
ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_strtok.c\

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\

OBJS = $(SRC:.c=.o)

OBJS_BONUS = $(SRC_BONUS:.c=.o)

RM = rm -f

AR = ar rc

CC = gcc

$(NAME): $(OBJS) libft.h
		$(CC) $(FLAGS) $(SRC)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

bonus:  $(OBJS_BONUS)  libft.h
		$(CC) $(FLAGS) $(SRC_BONUS)
		$(AR) $(NAME) $(OBJS_BONUS)

clean: 
		$(RM) $(OBJS_BONUS) $(OBJS)
		
fclean: clean
		$(RM) $(NAME)

re: fclean all
