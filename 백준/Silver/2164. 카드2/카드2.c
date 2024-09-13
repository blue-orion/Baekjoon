#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != -1)
		cnt++;
	return (cnt);
}

int	find(int *arr)
{
	int	len;
	int	i;
	int	*tmp;

	len = ft_strlen(arr);
	tmp = malloc(sizeof(int) * (len / 2 + 1));
	if (len == 1)
	{
		printf("%d", arr[0]);
		return (arr[0]);
	}
	i = 0;
	if (len % 2 == 0)
	{
		while (i < len / 2)
		{
			tmp[i] = arr[(i * 2) + 1];
			i++;
		}
	}
	else
	{
		while (i < len / 2 - 1)
		{
			tmp[i] = arr[((i + 1) * 2) + 1];
			i++;
		}
		tmp[i] = arr[1];
		i++;
	}
	tmp[i] = -1;
	find(tmp);
}

int	main(void)
{
	int		N;
	int		i;
	int	*arr;

	scanf("%d", &N);
	arr = malloc(sizeof(int) * (N + 1));
	if (N == 1)
	{
		printf("1");
		return (0);
	}
	if (N % 2 == 0)
	{
		i = 0;
		while (i < N / 2)
		{
			arr[i] = (i + 1) * 2;
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < N / 2 - 1)
		{
			arr[i] = (i + 2) * 2;
			i++;
		}
		arr[i] = 2;
		i++;
	}
	arr[i] = -1;
	find(arr);
	return (0);
}