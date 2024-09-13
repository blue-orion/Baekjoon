#include <stdio.h>

int	main(void)
{
	double	a;
	double	b;

	scanf("%lf %lf", &a, &b);
	a = a * ((100 - b) / 100);
	if (a >= 100)
		printf("0");
	else
	 	printf("1");
	return (0);
}