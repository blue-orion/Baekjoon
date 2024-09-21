#include <stdio.h>
#include <stdlib.h>

void	binary_search(int *lines, int size, int max, int target)
{
	long long	left = 1;
	long long	right = max;
	long long	mid = (left + right) / 2;
	int	res = target;

	while (right - left > 0)
	{
		// printf("left = %lld || right = %lld\n", left, right);
		res = target;
		for (int i = 0; i < size; i++)
		{
			res -= lines[i] / mid;
		}
		if (res <= 0)
		{
			left = mid + 1;
			right = right;
			mid = (left + right) / 2;
		}
		if (res > 0)
		{
			left = left;
			right = mid - 1;
			mid = (left + right) / 2;
		}
	}
	res = target;
	for (int i = 0; i < size; i++)
		res -= lines[i] / mid;
	if (res > 0)
		mid = mid - 1;
	printf("%lld", mid);
}

int main(void)
{
	int	K, N;
	int	*line;
	int	max;

	scanf("%d %d", &K, &N);
	line = (int *)malloc(sizeof(int) * K);
	max = 0;
	for (int i = 0; i < K; i++)
	{
		scanf("%d", &line[i]);
		if (line[i] > max)
			max = line[i];
	}
	binary_search(line, K, max, N);
}