#include <stdio.h>

int	find_answer(int	n)
{
	if (n <= 2)
		return (n);
	if (n == 3)
		return (4);
	return (find_answer(n - 1) + find_answer(n - 2) + find_answer(n - 3));
}

int main(void)
{
	int	T, n;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &n);
		printf("%d\n", find_answer(n));
	}
}