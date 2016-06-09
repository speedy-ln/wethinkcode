NAME = ftls.a

all	: $(NAME)

$(NAME)	:
	make re -C includes
	gcc -c -Wall -Werror -Wextra includes/libft.a
	ar rc $(NAME)
	ranlib $(NAME)

clean:
	make clean -C libft

fclean: clean
	make fclean -C libft
	rm ftls.a
