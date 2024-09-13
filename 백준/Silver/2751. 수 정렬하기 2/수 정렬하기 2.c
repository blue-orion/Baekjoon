#include <stdio.h>
#include <stdlib.h>

void	combine(int *arr, int *tmp, int left, int mid, int right)
{
	int	l;
	int	r;
	int	i;

	i = left;
	l = left;
	r = mid + 1;
	while (i <= right)
	{
		if (r > right)
		{
			tmp[i] = arr[l];
			l++;
		}
		else if (l > mid)
		{
			tmp[i] = arr[r];
			r++;
		}
		else if (arr[l] < arr[r])
		{
			tmp[i] = arr[l];
			l++;
		}
		else if (arr[l] > arr[r])
		{
			tmp[i] = arr[r];
			r++;
		}
		i++;
	}
	i = left;
	while (i <= right)
	{
		arr[i] = tmp[i];
		i++;
	}
}

void	merge_sort(int *arr, int *tmp, int left, int right)
{
	int	mid;

	if (right - left > 0)
	{
		mid = (right + left) / 2;
		merge_sort(arr, tmp, left, mid);
		merge_sort(arr, tmp, mid + 1, right);
		combine(arr, tmp, left, mid, right);
	}
}

int	main(void)
{
	int	N;
	int	*arr;
	int	*tmp;
	int i;

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N);
	tmp = (int *)malloc(sizeof(int) * N);
	i = 0;
	while (i < N)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	merge_sort(arr, tmp, 0, N - 1);
	i = 0;
	while (i < N)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}