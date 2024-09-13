#include <stdio.h>

int	main(void)
{
	int	N;
	int	a;
	int	i;

	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%d", &a);
		if (a % 2 == 0)
			printf("%d is even\n", a);
		else
		 	printf("%d is odd\n", a);
		i++;
	}
	return (0);
}