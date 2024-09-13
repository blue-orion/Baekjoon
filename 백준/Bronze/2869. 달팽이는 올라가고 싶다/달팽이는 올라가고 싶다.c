#include <stdio.h>

int main(void)
{
	int	up;
	int	down;
	int	day;
	int	target;

	scanf("%d %d %d", &up, &down, &target);
	target = target - up;
	day = up - down;
	if (target % day == 0)
	{
		printf("%d", target / day + 1);
	}
	else
	{
		printf("%d", target / day + 2);
	}
	return (0);
}