#include <string.h>
#include <stdio.h>
#include "libft/libft.h"

int ft_printf(char const *str, ...);
int main(void)
{
    ft_printf("ft_printf %c\n", 'a');
    printf("printf %c\n", 'a');
//    ft_printf("ft_printf %s\n", "hello");
//    printf("printf %s\n", 'hello');
	ft_printf("ft_printf \n");
	printf("printf \n");
	ft_printf("ft_printf %%\n");
	printf("printf %%\n");
	ft_printf("ft_printf %d\n", 42);
	printf("printf %d\n", 42);
	ft_printf("ft_printf %i%d\n", 42, 41);
	printf("printf %i%d\n", 42, 41);
	ft_printf("ft_printf %d%d%d\n", 42, 43, 44);
	printf("printf %d%d%d\n", 42, 43, 44);
	ft_printf("ft_printf %ld\n", 2147483647);
	printf("printf %ld\n", 2147483647);
	ft_printf("ft_printf %lld\n", 9223372036854775807);
	printf("printf %lld\n", 9223372036854775807);
	ft_printf("ft_printf %x\n", 505);
	printf("printf %x\n", 505);
	ft_printf("ft_printf %X\n", 505);
	printf("printf %X\n", 505);
	ft_printf("ft_printf %p\n", &ft_printf);
	printf("printf %p\n", &ft_printf);
	ft_printf("ft_printf %20.15d\n", 54321);
	printf("printf %20.15d\n", 54321);
	ft_printf("ft_printf %-10d\n", 3);
	printf("printf %-10d\n", 3);
	ft_printf("ft_printf % d\n", 3);
	printf("printf % d\n", 3);
	ft_printf("ft_printf %+d\n", 3);
	printf("printf %+d\n", 3);
	ft_printf("ft_printf %010d\n", 1);
	printf("printf %010d\n", 1);
	ft_printf("ft_printf hhd %hhd\n", 0);
	printf("printf hhd %hhd\n", 0);
	ft_printf("ft_printf %jd\n", 9223372036854775807);
	printf("printf %jd\n", 9223372036854775807);
	ft_printf("ft_printf %zd\n", 4294967295);
	printf("printf %zd\n", 4294967295);
	ft_printf("ft_printf %\n");
	printf("printf %\n");
	ft_printf("ft_printf %U\n", 4294967295);
	printf("printf %U\n", 4294967295);
	ft_printf("ft_printf %u\n", 4294967295);
	printf("printf %u\n", 4294967295);
	ft_printf("ft_printf %o\n", 40);
	printf("printf %o\n", 40);
	ft_printf("ft_printf %%#08x\n", 42);
	printf("printf %%#08x\n", 42);
	ft_printf("ft_printf %x\n", 1000);
	printf("printf %x\n", 1000);
	ft_printf("ft_printf %#X\n", 1000);
	printf("printf %#X\n", 1000);
	ft_printf("ft_printf %s\n", NULL);
    printf("printf %s\n", NULL);
	ft_printf("ft_printf %S\n", L"ݗݜशব");
    printf("printf %S\n", L"ݗݜशব");
	ft_printf("ft_printf %s%s\n", "test", "test");
	printf("printf %s%s\n", "test", "test");
	ft_printf("ft_printf %s%s%s\n", "test", "test", "test");
	printf("printf %s%s%s\n", "test", "test", "test");
	ft_printf("ft_printf %C\n", 15000);
    printf("printf %C\n", 15000);
//	while (1);
	return (0);
}
