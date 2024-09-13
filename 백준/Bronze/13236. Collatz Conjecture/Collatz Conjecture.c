#include <stdio.h>

int	main(void)
{
	int	n;

	scanf("%d", &n);
	if (n != 1)
		printf("%d ", n);
	while (1)
	{
		if (n == 1)
		{
			printf("%d", n);
			return (0);
		}
		else if (n % 2 == 0)
		{
			n /= 2;
			if (n != 1)
				printf("%d ", n);
		}
		else
		{
			n = 3 * n + 1;
			printf("%d ", n);
		}
	}
	return (0);
}