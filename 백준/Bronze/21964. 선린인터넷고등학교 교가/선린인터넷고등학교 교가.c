#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		N;
	char	*str;

	scanf("%d", &N);
	str = (char *)malloc(sizeof(char) * (N + 1));
	scanf("%s", str);
	str = str + (N - 5);
	printf("%s", str);
	return (0);
}