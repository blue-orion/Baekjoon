#include <stdio.h>

int	find(int t, int n)
{
	int	sum;
	int	i;
	int	j;

	sum = 0;
	if (t == 0)
	{
		return (n);
	}
	else
	{
		j = 1;
		while (j <= n)
		{
			sum += find(t - 1, j);
			j++;
		}
	}
	return (sum);
}

int	main(void)
{
	int tc;
	int	k;
	int	n;
	int	i;
	int	j;
	int	res;

	scanf("%d", &tc);
	i = 0;
	res = 0;
	while (i < tc)
	{
		scanf("%d", &k);
		scanf("%d", &n);
		res = find(k, n);
		printf("%d\n", res);
		i++;
	}
	return (0);
}