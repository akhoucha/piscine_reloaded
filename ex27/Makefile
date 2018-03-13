# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 03:30:51 by akhoucha          #+#    #+#              #
#    Updated: 2017/11/12 03:31:42 by akhoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./ft_display_file.c

OBJ = $(SRC:.c=.o)

OPTION = -c

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME): $(OBJ)

%.o: %.c
			gcc $(OPTION) $(FLAGS) $< -o $@

clean: 
			/bin/rm -rf $(OBJ)

fclean: clean
			/bin/rm -rf $(NAME)

re: fclean all
