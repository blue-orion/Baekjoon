#include <iostream>
#include <vector>

using namespace std;

std::vector<int>	dp = {1, 1};

int	fibo(int n) {
	if (n < 2) {
		return dp[n];
	}
	if (dp.size() < n) {
		fibo(n - 1);
	}
	dp.push_back((dp[n - 1] + dp[n - 2]) % 10007);
	return dp[n];
}

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int	n;
	cin >> n;

	cout << fibo(n) << '\n';
}