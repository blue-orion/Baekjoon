#include <stdio.h>

int	fact(int n)
{
	if (n <= 1)
		return (1);
	return (n * fact(n - 1));
}

int	main(void)
{
	int	N;
	int	K;
	int res;

	scanf("%d %d", &N, &K);
	res = fact(N) / (fact(K) * fact(N - K));
	printf("%d", res);
	return (0);
}