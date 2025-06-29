#include <iostream>
#include <vector>

int	main(void) {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	int	n, m;

	std::cin >> n >> m;

	std::vector<int> arr;

	int tmp = 0;
	for (int i = 0; i < n; i++) {
		int data;
		std::cin >> data;
		tmp += data;
		arr.push_back(tmp);
	}

	for (int i = 0; i < m; i++) {
		int start, end, sum;

		sum = 0;
		std::cin >> start >> end;
		if (start == 1) {
			sum = arr[end - 1];
		}
		else {
			sum = arr[end - 1] - arr[start - 2];
		}
		std::cout << sum << '\n';
	}
}