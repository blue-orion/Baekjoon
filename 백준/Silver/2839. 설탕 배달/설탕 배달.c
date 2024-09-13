#include <stdio.h>

int main(void)
{
	int N;
	int	ori_N;
	int	i;
	int	min;
	int total;

	scanf("%d", &N);
	ori_N = N;
	total = 0;
	min = N;
	i = N / 5;
	while (i >= 0)
	{
		if ((N - 5 * i) % 3 == 0)
		{
			total = i + (N - 5 * i) / 3;
			printf("%d", total);
			return (0);
		}
		i--;
	}
	printf("-1");
	return (0);
}