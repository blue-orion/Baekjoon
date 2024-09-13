#include <stdio.h>
#include <stdlib.h>

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	merge(t_point *p, t_point *tmp, int left, int right, int mid)
{
	int	l;
	int	r;
	int	idx;

	l = left;
	idx = left;
	r = mid + 1;
	while (idx <= right)
	{
		if (l > mid)
			tmp[idx] = p[r++];
		else if (r > right)
			tmp[idx] = p[l++];
		else if (p[l].y < p[r].y)
			tmp[idx] = p[l++];
		else if (p[l].y== p[r].y)
		{
			if (p[l].x < p[r].x)
				tmp[idx] = p[l++];
			else
				tmp[idx] = p[r++];
		}
		else
			tmp[idx] = p[r++];
		idx++;
	}
	idx = left;
	while (idx <= right)
	{
		p[idx] = tmp[idx];
		idx++;
	}
}

void	merge_sort(t_point *p, t_point *tmp, int left, int right)
{
	int	mid;

	if (right - left > 0)
	{
		mid = (left + right) / 2;
		merge_sort(p, tmp, left, mid);
		merge_sort(p, tmp, mid + 1, right);
		merge(p, tmp, left, right, mid);
	}
}

int	main(void)
{
	int		N;
	int		i;
	t_point *p;
	t_point *tmp;

	scanf("%d", &N);
	p = (t_point *)malloc(sizeof(t_point) * N);
	tmp = (t_point *)malloc(sizeof(t_point) * N);
	i = 0;
	while (i < N)
	{
		scanf("%d %d", &p[i].x, &p[i].y);
		i++;
	}
	merge_sort(p, tmp, 0, N - 1);
	i = 0;
	while (i < N)
	{
		printf("%d %d\n", p[i].x, p[i].y);
		i++;
	}
	return (0);
}