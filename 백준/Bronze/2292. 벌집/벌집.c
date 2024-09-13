#include <stdio.h>

int	main(void)
{
	int	N;
	int	cnt;
	int	range;
	int	i;

	scanf("%d", &N);
	cnt = 0;
	range = 0;
	i = 0;
	while(N > range)
	{
		if (i == 0)
		{
			cnt++;
			range = 1;
			i++;
			continue ;
		}
		cnt++;
		range += 6 * i;
		i++;
	}
	printf("%d", cnt);
	return (0);
}