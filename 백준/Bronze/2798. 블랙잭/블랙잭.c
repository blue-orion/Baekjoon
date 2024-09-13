#include <stdio.h>
#include <stdlib.h>

int	find_max(int max, int *deck, int size)
{
	int	i;
	int	j;
	int	k;
	int	sum;
	int	res;
	
	i = 0;
	res = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			k = j + 1;
			while (k < size)
			{
				sum = deck[i] + deck[j] + deck[k];
				if (sum == max)
					return (sum);
				if (sum < max && sum > res)
						res = sum;
				k++;
			}
			j++;
		}
		i++;
	}
	return (res);
}

int	main(void)
{
	int	N;
	int	M;
	int	*deck;
	int i;

	scanf("%d %d", &N, &M);
	deck = (int *)malloc(sizeof(int) * N);
	i = 0;
	while (i < N)
		scanf("%d", &deck[i++]);
	printf("%d", find_max(M, deck, N));
	return (0);
}