#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wchar.h>

typedef struct		s_c
{
	char			c;
	int				(*f)(va_list ap, int nb);
}			t_c;

int		ft_atoi(const char *str);
int		ft_abs(int n);
void	ft_bzero(void *s, size_t n);
int		ft_num_whitespaces(int *i, const char *format);
int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

char	*ft_itoa(int n);

void	*ft_memalloc(size_t size);

void	*ft_memchr(const void *s1, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);

void	*ft_memcpy(void *s1, const void *s2, size_t n);

void	ft_memdel(void **ap);

void	*ft_memmove(void *s1, const void *s2, size_t n);

void	*ft_memset(void *b, int c, size_t len);

char	*ft_strcat(char *restrict s1, const char *restrict s2);

void	ft_putchar(char c);

int		ft_strcmp(const char *s1, const char *s2);

void	ft_putstr(char *str);

void	ft_strclr(char *s);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dest, const char *src);

void	ft_strdel(char **as);

char	*ft_strdup(const char *src);

char	*ft_strdup(const char *src);

int		ft_strequ(char const *s1, char const *s2);

void	ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strjoin(char const *s1, char const *s2);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strstr(const char *str, const char *to_find);

char	*ft_strrchr(const char *cp, int ch);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_strncpy(char *s1, const char *s2, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, char *src, size_t siz);

char	*ft_strmap(char const *s, char (*f)(char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int		ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_strnew(size_t size);

char	*ft_strsub(char const *s, unsigned int start, size_t len);

char	*ft_strtrim(char const *s);

void	ft_putendl(char const *s);

void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char const *s, int fd);

void	ft_putendl_fd(char const *s, int fd);

void	ft_putnbr_fd(int n, int fd);

int		ft_putnbr_base(long nb, const char *base);
int		ft_putnbr_base_u(unsigned int nb, const char *base);
int		ft_return_nb_nb(long nb, const char *base);
int		ft_return_nb_nb_di(int nb, const char *base);

int		ft_putnbr_pf(va_list ap, int nbb);
int		ft_putnbr_u_pf(va_list ap, int nbb);
int		ft_putchar_pf(va_list ap, int nbb);
int		ft_putstr_pf(va_list ap, int nbb);
int		ft_putoctal_pf(va_list ap, int nbb);
int		ft_putz_pf(va_list ap, int nbb);
int		ft_puthexa_min_pf(va_list ap, int nbb);
int		ft_puthexa_max_pf(va_list ap, int nbb);
int		ft_puthexa_pf(va_list ap, int nbb);
int		ft_printf(char const *str, ...);
int		ft_putwchar_pf(va_list ap, int nbb);
size_t	ft_wcslen(const wchar_t *ws);
int		ft_putwstr_pf(va_list ap, int nbb);
void	ft_putwstr(wchar_t *ws);

#endif
