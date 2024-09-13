#include <stdio.h>
#include <stdlib.h>

int	input_num(int *arr, int *que, int size)
{
	int	que_i;
	int i;

	scanf("%d", &arr[0]);
	que[0] = arr[0];
	que_i = 1;
	i = 1;
	while (i < size)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0 && arr[i - 1] % 2 == 0
			|| arr[i] % 2 == 1 && arr[i - 1] % 2 == 1)
			;
		else
		 	que[que_i++] = arr[i];
		i++;
	}
	return (que_i);
}

void	init_arr(int *arr, int size)
{
	int i = 0;
	while (i < size)
		arr[i++] = 0;
}

int	main(void)
{
	int	N;
	int	*arr;
	int *que;
	int	i;

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N);
	init_arr(arr, N);
	que = (int *)malloc(sizeof(int) * N);
	init_arr(que, N);
	printf("%d", input_num(arr, que, N));
	return (0);
}