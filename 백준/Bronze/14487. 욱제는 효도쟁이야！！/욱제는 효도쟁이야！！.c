#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	N;
	int	*arr;
	int	i;
	int	sum;
	int	max;

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N);
	i = 0;
	max = 0;
	while (i < N)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	i = 0;
	sum = 0;
	while (i < N)
	{
		sum += arr[i];
		i++;
	}
	printf("%d", sum - max);
}