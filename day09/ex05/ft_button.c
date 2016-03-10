#include <stdio.h>

int	ft_button(int i, int j, int k)
{
if ((i > j && i < k) || (i > k && i < j))
	return (i);
if ((k > i && j < k) || (k > j && k < i))
	return (k);
if ((j > i && j < k) || (j > k && j < i))
	return (j);
return i;
}

int main()
{
printf("%d\n",ft_button(8,12,3));
return 0;
}
