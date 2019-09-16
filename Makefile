# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchuc <fchuc@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/10 12:00:28 by fchuc             #+#    #+#              #
#    Updated: 2019/06/10 20:40:09 by fchuc            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = computorV1

SRC_PATH = ./srcs/
OBJ_PATH = ./obj/
INC_PATH = ./includes/
LIB_PATH = ./libft/

SRC_FILES = main.c \
			parse.c \
			solve.c \
			print.c \
			format.c \
			fraction.c \
			cubic.c

OBJ_FILES = $(SRC_FILES:.c=.o)

LIB_FILES = libft.a

OBJ_NAME = $(addprefix $(OBJ_PATH),$(OBJ_FILES))
LIBFT = $(addprefix $(LIB_PATH),$(LIB_FILES))

all: $(NAME)

$(OBJ_PATH) :
		mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
		$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_PATH) -I $(LIB_PATH)includes

$(NAME) : $(OBJ_PATH) $(OBJ_NAME)
		make -C $(LIB_PATH)
		$(CC) $(CFLAGS) $(OBJ_NAME) $(LIBFT) -o $@ -I $(INC_PATH) -I $(LIB_PATH)includes/ -lpcre

.PHONY: clean fclean

clean:
		rm -rf $(OBJ_PATH)
		make -C $(LIB_PATH) clean

fclean: clean
		rm -f $(NAME)
		make -C $(LIB_PATH) fclean

re: fclean all
