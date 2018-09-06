# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icalvert <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 13:34:14 by icalvert          #+#    #+#              #
#    Updated: 2018/08/29 10:52:59 by icalvert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TAG = gcc
NAME = fdf
FLAG = -Wall -Werror -Wextra
INC_LIB = -I ./libft/ -L ./libft/ -lft
MLX = -I minilibx -L. -lmlx -framework OpenGL -framework AppKit
SRC = read.c \
	  hooks.c \
	  draw.c \

all: $(NAME)

$(NAME):
	$(TAG) $(FLAG) $(SRC) -o $(NAME) $(MLX) $(INC_LIB)

clean:
	rm -f *.o
fclean: clean
	rm -f fdf

re: fclean all

.PHONY: all, clean, fclean, re
