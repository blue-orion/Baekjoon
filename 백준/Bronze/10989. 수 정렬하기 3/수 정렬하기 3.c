#include <stdio.h>

int	main(void)
{
	int	N;
	int	i;
	int	arr[10001];
	int	num;

	i = 0;
	while (i < 10001)
		arr[i++] = 0;
	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%d", &num);
		arr[num]++;
		i++;
	}
	i = 1;
	while (i < 10001)
	{
		while (arr[i] > 0)
		{
			printf("%d\n", i);
			arr[i]--;
		}
		i++;
	}
}