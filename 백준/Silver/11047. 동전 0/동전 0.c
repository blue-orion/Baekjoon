#include <stdio.h>

int	main(void)
{
	int	N, K;
	int	cnt;
	int	coin[10];

	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &coin[i]);
	}
	cnt = 0;
	int i = N - 1;
	while (K != 0)
	{
		while (K >= coin[i])
		{
			K = K - coin[i];
			cnt++;
		}
		i--;
	}
	printf("%d", cnt);
	return (0);
}