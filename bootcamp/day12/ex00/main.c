Speed: gcc -o file libft.a main.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnkadime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/17 14:26:16 by lnkadime          #+#    #+#             */
/*   Updated: 2016/03/17 15:55:29 by lnkadime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void    ft_putstr(char *str);

void    print_file_contents(char **argv)
{
    int     fd;
    char    buf[1];

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        return;
    while (read(fd, buf, 1) != 0)
        ft_putstr(buf);
    close(fd);
}

int     main(int argc, char **argv)
{
    if (argc > 2)
        ft_putstr("Too many arguments.\n");
    else if (argc == 1)
        ft_putstr("File name missing.\n");
    else if (argc == 2)
        print_file_contents(argv);
    return (0);
}
