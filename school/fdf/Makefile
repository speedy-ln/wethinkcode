# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/05 14:12:16 by lnkadime          #+#    #+#              #
#    Updated: 2016/06/05 14:37:23 by lnkadime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

all : $(NAME)

$(NAME) :
	make re -C libft
	clang -Wall -Werror -Wextra -o fdf main.c drawmap.c libft/libft.a  -lmlx -framework OpenGL -framework AppKit

clean:
	make clean -C libft

fclean: clean
	make fclean -C libft
	rm fdf

re : fclean $(NAME)
