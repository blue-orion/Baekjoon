#include <stdio.h>

int	find_result(int *stairs, int end)
{
	int	score = 0;
	int	dp[301] = {0, };
	int	i;

	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	i = 3;
	while (i <= end)
	{
		if (dp[i - 3] + stairs[i - 1] + stairs[i] > dp[i - 2] + stairs[i])
			dp[i] = dp[i - 3] + stairs[i - 1] + stairs[i];
		else
			dp[i] = dp[i - 2] + stairs[i];
		i++;
	}
	return (dp[end]);
}

int	main(void)
{
	int	n;
	int	stairs[301];

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &stairs[i]);
	printf("%d", find_result(stairs, n));
}