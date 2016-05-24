#include <stdio.h>

void	upper(char *s, char c, int i)
{
	c = (((c - 65) + 42) % 26) + 65;
	s[i] = c;
}

void	lower(char *s, char c, int i)
{
	c = (((c - 97) + 42) % 26) + 97;
	s[i] = c;
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			upper(str, str[i], i);
		}
		else if (str[i] >=97 && str[i] <= 122)
		{
			lower(str, str[i], i);
		}
	i++;
	}
	return str;
}

int main()
{
char s[6] = "HeLl!";
printf("%s\n", ft_rot42(s));
return 0;
}
