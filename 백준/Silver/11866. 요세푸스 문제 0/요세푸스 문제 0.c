#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	N;
	int	K;
	int	i;
	int	idx;
	int	*arr;
	int	cnt;

	scanf("%d %d", &N, &K);
	arr = (int *)malloc(sizeof(int) * (N + 1));
	i = 1;
	while (i <= N)
	{
		arr[i] = i;
		i++;
	}
	i = 1;
	cnt = 0;
	idx = 1;
	printf("<");
	while (1)
	{
		if (cnt == N - 1)
			break ;
		if (idx > N)
			idx = idx % N;
		if (idx == 0)
			idx++;
		if (i % K == 0)
		{
			printf("%d, ", arr[idx]);
			cnt++;
			arr[idx] = 0;
			i = 1;
			idx++;
			continue ;
		}
		if (arr[idx] != 0)
		{
			i++;
			idx++;
		}
		if (idx > N)
			idx = idx % N;
		while (arr[idx] == 0)
		{
			idx++;
			if (idx > N)
				idx = idx % N;
		}
	}
	while(arr[idx] == 0)
	{
		idx++;
		if (idx > N)
			idx = idx % N;
	}
	printf("%d>", arr[idx]);
}