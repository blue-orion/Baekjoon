#include <stdio.h>
#include <stdlib.h>
#define ABS(n) (n > 0 ? n : n * -1)
#define ROUND(n) (int)(n + 0.5)

int	compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

void	mode(int *arr, int size, int *mode_arr)
{
	int	multi_mode[2] = {5000, 5000};
	int	i;
	int	max;
	int	max_key;

	i = 0;
	max = 0;
	while (i < 8001)
	{
		if (mode_arr[i] > max)
			max = mode_arr[i];
		i++;
	}
	i = 0;
	while (i < 8001)
	{
		if (mode_arr[i] == max)
		{
			if (multi_mode[0] == 5000)
			{
				multi_mode[0] = i - 4000;
			}
			else 
			{
				multi_mode[1] = i - 4000;
				break ;
			}
		}
		i++;
	}
	if (multi_mode[1] == 5000)
	{
		printf("%d\n", multi_mode[0]);
		return ;
	}
	printf("%d\n", multi_mode[1]);
	return ;
}

int	main(void)
{
	int	N;
	int	input;
	int	*arr;
	int	mode_arr[8001] = {0, };
	double	sum;
	int	i;

	scanf("%d", &N);
	arr = (int *)malloc(sizeof(int) * N);
	sum = 0;
	i = 0;
	while (i < N)
	{
		scanf("%d", &input);
		arr[i] = input;
		sum += input;
		mode_arr[arr[i] + 4000]++;
		i++;
	}
	qsort(arr, N, sizeof(int), compare);
	if (sum < 0)
		printf("%d\n", -1 * ROUND(ABS(sum) / N));
	else
	 	printf("%d\n", ROUND(sum / N));
	printf("%d\n", arr[N / 2]);
	mode(arr, N, mode_arr);
	printf("%d", arr[N - 1] - arr[0]);
}