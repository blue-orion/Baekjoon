#include <stdio.h>
#include <stdlib.h>

unsigned long long	power_31(int n)
{
	if (n <= 0)
		return (1);
	return (31 * power_31(n - 1));
}

int	main(void)
{
	int		L;
	char	*str;
	int		i;
	int		j;
	unsigned long long	sum;
	unsigned long long	tmp;

	scanf("%d", &L);
	str = (char *)malloc(sizeof(char) * (L + 1));
	scanf("%s", str);
	i = 0;
	sum = 0;
	while (str[i] != '\0')
	{
		j = i;
		tmp = str[i] - 'a' + 1;
		while (j > 12)
		{
			tmp *= power_31(12) % 1234567891;
			tmp %= 1234567891;
			j -= 12;
		}
		tmp *= power_31(j) % 1234567891;
		sum += tmp;
		i++;
	}
	sum = sum % 1234567891;
	printf("%llu", sum);
	return (0);
}