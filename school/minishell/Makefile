# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/28 15:00:16 by lnkadime          #+#    #+#              #
#    Updated: 2016/06/30 14:46:02 by lnkadime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLIB=libft/libft.a

NAME=minishell
SRC=
MAIN=minishell.c
OBJ=$(SRC:.c=.o)

all	:$(NAME)

$(NAME)	:$(OBJ)
	make re -C libft/
	gcc -o minishell -Wall -Werror -Wextra $(MAIN) $(SRC) $(OBJ) $(INCLIB)

clean	:
	rm -f $(OBJ)

fclean	:clean
	rm -f $(NAME)

re	: fclean clean all
