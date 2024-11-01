#include <stdio.h>

// arr[0] = 1;
// arr[1] = 1;
// arr[2] = 1;
// arr[3] = arr[1] + arr[2];	2
// arr[4] = arr[2] + arr[1];	2
// arr[5] = arr[4] + arr[0];	3, 3
// arr[6] = arr[5] + arr[1];	4, 4
// arr[7] = arr[6] + arr[2];	5, 5
// arr[8] = arr[7] + arr[3];	7, 7
// arr[9] = arr[8] + arr[4];	9, 9
// arr[10] = arr[9] + arr[5];	12, 12
// arr[11] = arr[10] + arr[6];	16, 16

unsigned long long wave_sequence(unsigned long long *arr, int N)
{
	if (arr[N] != 0)
		return (arr[N]);
	if (arr[N - 1] == 0)
		wave_sequence(arr, N - 1);
	arr[N] = arr[N - 1] + arr[N - 5];
	return (arr[N]);
}

int main(void)
{
	int	T;

	scanf("%d", &T);

	unsigned long long arr[101] = {0, };

	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;

	for (int i = 0; i < T; i++)
	{
		int	N;
		
		scanf("%d", &N);
		if (N < 1 || N > 100)
			return (0);
		printf("%lld\n", wave_sequence(arr, N));
	}
	return (0);
}