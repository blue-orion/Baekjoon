#include <stdio.h>
#include <stdlib.h>

void	str_swap(char **str1, char **str2)
{
	char *tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0'  || str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	quick_sort(char **str, int size, int left, int right)
{
	int	low;
	int	high;
	int	fl;
	int	low_len;
	int	high_len;
	int	pivot_len;

	if (size <= 1)
		return ;
	pivot_len = ft_strlen(str[left]);
	low = left + 1;
	high = right;
	// Compare by length
	while (low <= high)
	{
		low_len = ft_strlen(str[low]);
		high_len = ft_strlen(str[high]);
		if (low_len < pivot_len)
		{
			low++;
			continue;
		}
		if (pivot_len == low_len)
		{
			if (ft_strcmp(str[left], str[low]) > 0)
			{
				low++;
				continue ;
			}
		}
		if (high_len > pivot_len)
		{
			high--;
			continue ;
		}
		if (pivot_len == high_len)
		{
			if (ft_strcmp(str[left], str[high]) < 0)
			{
				high--;
				continue ;
			}
		}
		str_swap(&str[low], &str[high]);
		low++;
		high--;
	}
	str_swap(&str[left], &str[high]);
	quick_sort(str, high, 0, high - 1);
	quick_sort(str + high + 1, size - high - 1, 0, size - high - 2);
}

int	main(void)
{
	int	N;
	int i;
	int	j;
	char **str;
	int	pre_len;
	int	post_len;

	scanf("%d", &N);
	str = (char **)malloc(sizeof(char *) * N);
	i = 0;
	while (i < N)
	{
		str[i] = (char *)malloc(sizeof(char) * 51);
		scanf("%s", str[i]);
		i++;
	}
	quick_sort(str, N, 0, N - 1);
	i = 0;
	while (i < N - 1)
	{
		if (ft_strcmp(str[i], str[i + 1]) == 0)
		{
			i++;
			continue;
		}
		printf("%s\n", str[i]);
		i++;
	}
	printf("%s", str[i]);
	return (0);
}