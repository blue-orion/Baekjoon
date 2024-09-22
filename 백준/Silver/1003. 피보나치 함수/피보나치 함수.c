#include <stdio.h>

void	fibo(int (*dp)[2], int n)
{
	// printf("n = %d\n", n);
	if (dp[n][0] != 0 || dp[n][1] != 0)
		return ;
	if (dp[n - 2][0] == 0 && dp[n - 2][1] == 0)
	{
		fibo(dp, n - 2);
	}
	if (dp[n - 1][0] == 0 && dp[n - 1][1] == 0)
	{
		fibo(dp, n - 1);
	}
	dp[n][0] = dp[n - 1][0] + dp[n - 2][0];
	dp[n][1] = dp[n - 1][1] + dp[n - 2][1];
}

int	main(void)
{
	int	T;
	int	n;
	int	fibo_dp[41][2];

	fibo_dp[0][0] = 1;
	fibo_dp[0][1] = 0;
	fibo_dp[1][0] = 0;
	fibo_dp[1][1] = 1;
	for (int i = 2; i < 41; i++)
	{
		fibo_dp[i][0] = 0;
		fibo_dp[i][1] = 0;
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		fibo(fibo_dp, n);
		printf("%d %d\n", fibo_dp[n][0], fibo_dp[n][1]);
	}
}