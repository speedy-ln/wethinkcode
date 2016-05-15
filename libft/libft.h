#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>

int		ft_atoi(const char *str);

void	ft_bzero(void *s, size_t n);

int		ft_isalnum(int c);

int   ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	*ft_memchr(const void *s1, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);

void	*ft_memcpy(void *s1, const void *s2, size_t n);

void	*ft_memmove(void *s1, const void *s2, size_t n);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strcat(char *s1, char *s2);

void	ft_putchar(char c);

int	ft_strcmp(const char *s1, const char *s2);

void	ft_putstr(char *str);

int	ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src);

int		ft_tolower(int c);

char	*ft_strstr(char *str, char *to_find)

char	*ft_strrchr(char *cp, int ch);

char  *ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strncpy(char *s1, const char *s2, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strncat(char *s1, char *s2, size_t n);

size_t   ft_strlen(char *str);

size_t		ft_strlcat(char *dst, char *src, size_t siz);

#endif
