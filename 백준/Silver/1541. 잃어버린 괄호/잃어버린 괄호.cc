#include <iostream>
#include <string>

using namespace std;


int	find_operator(string s) {
	int	plus_op = s.find('+');
	int	minus_op = s.find('-');
	if (plus_op == string::npos && minus_op == string::npos)
		return -1;

	int	op;
	if (plus_op != string::npos && minus_op == string::npos)
		op = plus_op;
	else if (minus_op != string::npos && plus_op == string::npos)
		op = minus_op;
	else if (plus_op < minus_op)
		op = plus_op;
	else
		op = minus_op;
	return op;
}

int	main(void) {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	string	input;
	cin >> input;

	int	result = 0;
	int	minusflag = 0;
	int	num;

	int	op = find_operator(input);
	while (op != -1) {
		num = stoi(input.substr(0, op));
 
		if (minusflag) result -= num;
		else result += num;
		if (input[op] == '-') {
			minusflag = 1;
		}
		
		input = input.substr(op + 1);
		op = find_operator(input);
	}
	num = stoi(input.substr(0));
	if (minusflag) result -= num;
	else result += num;
	cout << result << '\n';
}