#include <stdio.h>

typedef struct s_point
{
	double	x;
	double	y;
}	t_point;

void	ft_swap(t_point *a, t_point *b)
{
	t_point tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	t_point A[4];
	double	len_x;
	double	len_y;
	double	x;
	double	y;

	while (1)
	{
		if (scanf("%lf %lf %lf %lf", &A[0].x, &A[0].y, &A[1].x, &A[1].y) == -1)
			return (0);
		if (scanf("%lf %lf %lf %lf", &A[2].x, &A[2].y, &A[3].x, &A[3].y) == -1)
			return (0);
		if (A[0].x == A[2].x && A[0].y == A[2].y)
			ft_swap(&A[0], &A[1]);
		if (A[0].x == A[3].x && A[0].y == A[3].y)
		{
			ft_swap(&A[0], &A[1]);
			ft_swap(&A[2], &A[3]);
		}
		if (A[1].x == A[3].x && A[1].y == A[3].y)
			ft_swap(&A[2], &A[3]);
		x = (A[0].x + A[3].x) / 2;
		y = (A[0].y + A[3].y) / 2;
		len_x = x - A[1].x;
		len_y = y - A[1].y;
		x = x + len_x;
		y = y + len_y;
		printf("%.3lf %.3lf\n", x, y);
	}
	return (0);
}