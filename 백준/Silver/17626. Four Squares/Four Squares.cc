#include <iostream>

using namespace std;

int	dp[50005];

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int	n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}

	cout << dp[n];
	return 0;
}