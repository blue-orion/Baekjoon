#include <stdio.h>

int	main(void)
{
	int	arr[4];
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < 4)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		i++;
	}
	printf("%d\n%d", sum / 60, sum % 60);
}