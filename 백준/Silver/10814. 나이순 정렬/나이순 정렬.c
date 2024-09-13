#include <stdio.h>
#include <stdlib.h>

typedef struct s_member
{
	int		age;
	char	name[101];
}	t_member;

void	combine(t_member *arr, t_member *tmp, int left, int right, int mid)
{
	int	l;
	int	i;
	int	r;

	l = left;
	i = left;
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
		else if (arr[l].age <= arr[r].age)
		{
			tmp[i] = arr[l];
			l++;
		}
		else if (arr[l].age > arr[r].age)
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

void	merge_sort(t_member *arr, t_member *tmp, int left, int right)
{
	int	mid;

	if (right - left > 0)
	{
		mid = (left + right) / 2;
		merge_sort(arr, tmp, left, mid);
		merge_sort(arr, tmp, mid + 1, right);
		combine(arr, tmp, left, right, mid);
	}
}

int	main(void)
{
	int	N;
	int	i;
	t_member *arr;
	t_member *tmp;

	scanf("%d", &N);
	arr = (t_member *)malloc(sizeof(t_member) * N);
	tmp = (t_member *)malloc(sizeof(t_member) * N);
	i = 0;
	while (i < N)
	{
		scanf("%d %s", &arr[i].age, arr[i].name);
		i++;
	}
	merge_sort(arr, tmp, 0, N - 1);
	i = 0;
	while (i < N)
	{
		printf("%d %s\n", arr[i].age, arr[i].name);
		i++;
	}
	return (0);
}