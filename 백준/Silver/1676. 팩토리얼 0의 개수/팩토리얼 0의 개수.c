#include <stdio.h>

int	main(void)
{
	int	N;
	int	cnt;

	scanf("%d", &N);
	cnt = 0;
	while (N != 0)
	{
		if (N >= 125 && N % 125 == 0)
		{
			cnt += 3;
		}
		else if (N >= 25 && N % 25 == 0)
		{
			cnt += 2;
		}
		else if (N >= 5 && N % 5 == 0)
		{
			cnt += 1;
		}
		N--;
	}
	printf("%d", cnt);
}