# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nugoncal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 16:13:52 by nugoncal          #+#    #+#              #
#    Updated: 2025/06/13 16:19:56 by nugoncal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compiler
CC = cc
CFLAGS = -Wall -Wextra - Werror
INC = -I includes

SRC = 

SRCBON = 

OBJ =		$(SRC:.c=.o)

OBJBON	=	${SRCBON:.c=.o}

# Commands
AR = ar -rcs
RM = rm -fr

BUFFER_SIZE = -D BUFFER_SIZE=42

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) $< -c

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $()

re:	fclean all
