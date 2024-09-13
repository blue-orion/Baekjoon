#include <stdio.h>
#include <stdlib.h>

int	compare(const void *a, const void *b)
{
	return (*(int *)a > *(int *)b);
}

int	find(int *arr, int left, int right, int to_find)
{
	int mid;

	mid = (left + right) / 2;
	if (to_find == arr[mid])
		return (1);
	if (right - left < 0)
		return (0);
	if (to_find > arr[mid])
	{
		return (find(arr, mid + 1, right, to_find));
	}
	else
	{
		return (find(arr, 0, mid - 1, to_find));
	}
}

int	main(void)
{
	int	N;
	int	*arr;
	int	M;
	int	to_find;

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	qsort(arr, N, sizeof(int), compare);
	scanf("%d", &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &to_find);
		printf("%d\n", find(arr, 0, N - 1, to_find));
	}
}