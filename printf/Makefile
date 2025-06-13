# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 15:48:06 by nugoncal          #+#    #+#              #
#    Updated: 2025/05/28 15:58:19 by nugoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME

NAME = libftprintf.a
EXEC = a.out

SRCS = ${wildcard *.c} 
OBJS = $(SRCS:.c=.o)

# Compiler

CC = cc
CFLAGS = -Wall -Wextra -Werror

# commands

AR = ar -rcs
RM = rm -fr

# rules

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) $< -c

test: all
	$(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(NAME) $(EXEC)

re:	fclean all
