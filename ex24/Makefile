# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhoucha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/12 03:20:08 by akhoucha          #+#    #+#              #
#    Updated: 2017/11/12 03:21:22 by akhoucha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_put
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

OPTION = -c 

FLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
			gcc $(OPTION) $(FLAGS) $(SRC)
			ar rc $(NAME) $(OBJ)

clean: 	
			/bin/rm -rf $(OBJ)

fclean: clean
			/bin/rm -rf $(NAME)

re: fclean all
