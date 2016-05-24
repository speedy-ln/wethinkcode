# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsaunder <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/05/16 10:10:56 by bsaunder          #+#    #+#              #
#    Updated: 2016/05/16 10:11:54 by bsaunder         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

='\033[0m'
GREEN='\033[0;32m'
BLUE='\033[0;34m'

echo "${RED}*-----------------------------------*"
echo "|                                   |"
echo "|   ${GREEN}Starting to norm all files...${RED}   |"
echo "|                                   |"
echo "*-----------------------------------*${NC}"
echo "${BLUE}====================================================================================="
echo "${RED}*-----------------------------------*"
echo "|                                   |"
echo "|   ${GREEN}Norming All The ft_mem's...${RED}     |"
echo "|                                   |"
echo "*-----------------------------------*${NC}"

norminette ft_memset.c ft_memalloc.c ft_memdel.c ft_memcpy.c  ft_memccpy.c  ft_memmove.c  ft_memchr.c  ft_memcmp.c

echo ""
echo "${RED}*-----------------------------------*"
echo "|                                   |"
echo "|   ${GREEN}Norming All The ft_str's...${RED}     |"
echo "|                                   |"
echo "*-----------------------------------*${NC}"
echo ""

norminette ft_strlen.c  ft_strdup.c  ft_strcpy.c  ft_strncpy.c  ft_strcat.c  ft_strncat.c ft_strnew.c ft_strdel.c ft_strtrim.c ft_strsub.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strjoin.c ft_strsplit.c ft_strlcat.c  ft_strchr.c  ft_strstr.c  ft_strrchr.c  ft_strnstr.c  ft_strcmp.c ft_strncmp.c ft_strequ.c ft_strnequ.c ft_strclr.c

echo ""
echo "${RED}*-----------------------------------*"
echo "|                                   |"
echo "|   ${GREEN}Norming All The Random's...${RED}     |"
echo "|                                   |"
echo "*-----------------------------------*${NC}"
echo ""
norminette ft_atoi.c ft_bzero.c  ft_isalpha.c  ft_isdigit.c  ft_isascii.c  ft_isalnum.c  ft_isprint.c  ft_toupper.c  ft_tolower.c ft_itoa.c

echo ""
echo "${RED}*-----------------------------------*"
echo "|                                   |"
echo "|   ${GREEN}Norming All The ft_put's...${RED}     |"
echo "|                                   |"
echo "*-----------------------------------*${NC}"
echo ""
norminette ft_putnbr.c ft_putnbr_fd.c ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c ft_putendl.c ft_putendl_fd.c

echo "${RED}*--------------------------------------------*"
echo "|                                            |"
echo "|   ${GREEN}Done! You can see the results above...${RED}   |"
echo "|                                            |"
echo "*--------------------------------------------*"
echo ""
echo ""

echo "Do you want me to Test all your functions? (\"yes\" or \"no\")"
echo "   <Must Have All Of Part 1 And Part 2>"

read answer

if (( "$answer" == "yes")) || (( "$answer" == "y" )); then
	echo "${RED}*-----------------------------------*"
	echo "|                                   |"
	echo "|   ${GREEN}OK, You Asked For it!!${RED}          |"
	echo "|                                   |"
	echo "*-----------------------------------*${NC}"
	make fclean
	make re
	gcc libft_testfile.c libft.a
	echo "${RED}*-----------------------------------*"
	echo "|                                   |"
	echo "|          ${GREEN}Test all files...${RED}        |"
	echo "|                                   |"
	echo "*-----------------------------------*${NC}"
	./a.out
	echo "${RED}*-----------------------------------*"
	echo "|                   *---------*     |"
	echo "|           ${GREEN}|Thank You|${RED}             |"
	echo "|                   *----------*    |"
	echo "|            ~TestFile~             |"
	echo "|                                   |"
	echo "*-----------------------------------*${NC}"
else
	echo "${RED}*-----------------------------------*"
	echo "|                                   |"
	echo "|           ${GREEN}~Thank You~${RED}             |"
	echo "|            ~TestFile~             |"
	echo "|                                   |"
	echo "*-----------------------------------*${NC}"
fi
