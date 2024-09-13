#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char *str;
	int i;

	str = malloc(sizeof(char) * 11);
	str[10] = '\0';
	i = 9;
	while (n != 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str + i + 1);
}

int	find_666(char *str)
{
	while (*(str + 2) != '\0')
	{
		if (*str == '6' && *(str + 1) == '6' && *(str + 2) == '6')
			return (1);
		str++;
	}
	return (0);
}
int	main(void)
{
	int	N;
	int	num;
	int	cnt;

	scanf("%d", &N);
	num = 666;
	cnt = 1;
	while (1)
	{
		if (cnt == N)
		{
			printf("%d", num);
			return (0);
		}
		num++;
		while (!find_666(ft_itoa(num)))
			num++;
		cnt++;
	}
	return (0);
}