#include <stdio.h>
#include <stdlib.h>
#define ROUND(n) (int)(n + 0.5)

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	q_sort(int *arr, int size, int start, int end)
{
	int	mid;
	int	low;
	int	high;
	int	pivot;

	mid = (start + end) / 2;
	pivot = start;
	low = start + 1;
	high = end;
	if (end - start <= 0)
		return ;
	while (high - low >= 0)
	{
		if (arr[low] <= arr[pivot])
			low++;
		else if (arr[high] > arr[pivot])
			high--;
		else
		{
			ft_swap(&arr[low], &arr[high]);
		}
	}
	ft_swap(&arr[pivot], &arr[high]);
	q_sort(arr, size, start, high - 1);
	q_sort(arr, size, low, end);
}

int	compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int	main(void)
{
	int	n;
	int	i;
	int	*arr;
	double	exclude = 0;
	double	average = 0;

	scanf("%d", &n);
	if (n == 0)
	{
		printf("0");
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (n));
	i = 0;
	while (i < n)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	qsort(arr, n, sizeof(int), compare);
	exclude = (double)n * 0.15;
	i = ROUND(exclude);
	while (i < n - ROUND(exclude))
	{
		average += (double)arr[i];
		i++;
	}
	average = average / (n - ROUND(exclude) * 2);
	printf("%d", ROUND(average));

	return (0);
}