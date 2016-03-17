# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/17 14:22:48 by lnkadime          #+#    #+#              #
#    Updated: 2016/03/17 15:52:45 by lnkadime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = libft.a

all: $(NAME)

$(NAME):
        gcc -Wall -Werror -Wextra -o $(NAME) $(SRC) main.c

clean:
        rm -f $(NAME)

fclean: clean
        rm -f $(NAME)

re: fclean all
