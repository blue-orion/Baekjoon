#include <iostream>

using namespace std;

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	string	str;

	cin >> str;
	int	sum = 0;
	int	flag;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '*') {
			if (i % 2 == 0)
				flag = 0;
			else
				flag = 1;
			continue ;
		}
		if (i % 2 == 0)
			sum += str[i] - '0';
		else
			sum += 3 * (str[i] - '0');
	}
	// (3 * x + sum) % 10 == 0
	// (3 * x + sum) 은 10의 배수
	if (flag) {
		int	x;

		for (x = 0; x < 10; x++) {
			if ((3 * x + sum) % 10 == 0) {
				break ;
			}
		}
		cout << x << '\n';
	}
	else {
		cout << (100 - sum % 10) % 10 << '\n';
	}
}