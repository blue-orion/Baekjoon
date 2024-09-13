#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	K;
	int	*stack;
	int	n;
	int	i;
	int	idx;
	int	sum;

	scanf("%d", &K);
	stack = (int *)malloc(sizeof(int) * (K + 1));
	i = 0;
	idx = 0;
	sum = 0;
	while (i < K)
	{
		scanf("%d", &n);
		if (n != 0)
		{
			sum += n;
			stack[++idx] = n;
		}
		else
		{
			sum -= stack[idx];
			idx--;
		}
		i++;
	}
	printf("%d", sum);
	return (0);
}