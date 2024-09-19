#include <stdio.h>

int main(void)
{
	int	M;
	int	N;
	int	j;
	int	fl;

	scanf("%d %d", &M, &N);
	for (int i = M; i <= N; i++)
	{
		if (i == 1)
			continue ;
		fl = 1;
		j = 2;
		while (j <= i / j)
		{
			if (i % j == 0)
			{
				fl = 0;
				break ;
			}
			j++;
		}
		if (fl == 1)
			printf("%d\n", i);	
	}
	return (0);
}