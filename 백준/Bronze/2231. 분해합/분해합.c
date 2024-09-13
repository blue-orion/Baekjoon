#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
	int i;
	char *tmp;

	tmp = malloc(sizeof(char) * 11);
	tmp[10] = '\0';
	i = 9;
	while (n != 0)
	{
		tmp[i] = n % 10;
		n /= 10;
		i--;
	}
	return (tmp + i + 1);
}

int	decomp(int n)
{
	char *str_n;
	int res;
	int digit;
	int	i;

	str_n = ft_itoa(n);
	res = n;
	digit = 0;
	while (str_n[digit] != '\0')
		digit++;
	i = 0;
	while (i < digit)
	{
		res += str_n[i];
		i++;
	}
	return (res);
}

int main(void) 
{
	int	N;
	int i;

	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		if (decomp(i) == N)
		{
			printf("%d", i);
			return (0);
		}
		i++;
	}
	printf("0");
	return (0);
}