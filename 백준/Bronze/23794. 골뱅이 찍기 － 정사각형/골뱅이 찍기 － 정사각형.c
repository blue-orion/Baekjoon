#include <stdio.h>

int	main(void)
{
	int	N;
	int	i;

	scanf("%d", &N);
	i = 0;
	while (i <= N + 1)
	{
		if (i == 0)
		{
			for (int j = 0; j < N + 2; j++)
				printf("@");
			printf("\n");
		}
		else if (i == N + 1)
		{
			for (int j = 0; j < N + 2; j++)
				printf("@");
		}
		else
		{
			printf("@");
			for (int j = 0; j < N; j++)
				printf(" ");
			printf("@");
			printf("\n");
		}
		i++;
	}
	return (0);
}