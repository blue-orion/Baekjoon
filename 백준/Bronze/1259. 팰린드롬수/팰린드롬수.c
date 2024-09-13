#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * 6);
	str[5] = '\0';
	i = 4;
	while (n != 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str + i + 1);
}

int	main(void)
{
	int		input;
	char	*str;
	int		len;
	int		i;

	while (1)
	{
		scanf("%d", &input);
		if (input == 0 || input < 1 || input > 99999)
			return (0);
		str = ft_itoa(input);
		len = 0;
		while (str[len] != '\0')
			len++;
		i = 0;
		while (i < len / 2)
		{
			if (str[i] != str[len - 1 - i])
			{
				printf("no\n");
				break ;
			}
			i++;
		}
		if (i == len / 2)
		{
			printf("yes\n");
		}
	}
	return (0);
}