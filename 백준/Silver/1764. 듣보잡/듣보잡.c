#include <stdio.h>
#include <stdlib.h>

typedef struct s_table
{
	char			name[21];
	struct s_table	*next;
}	t_table;

int		ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		compare(const void *a, const void *b)
{
	char	*str1;
	char	*str2;

	str1 = *(char **)a;
	str2 = *(char **)b;
	// printf("str1 = %s || str2 = %s\n", str1, str2);
	return (ft_strcmp(str1, str2));
}

int		hash_key(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		res += *str;
		str++;
	}
	return (res % 500001);
}

void	init_table(t_table **names)
{
	for (int i = 0; i < 500001; i++)
	{
		names[i] = (t_table *)malloc(sizeof(t_table));
		names[i]->name[0] = '\0';
		names[i]->next = NULL;
	}
}

void	input_table(t_table **names, char *name)
{
	t_table	*cur;
	t_table	*parent = NULL;

	cur = names[hash_key(name)];
	while (cur->next != NULL)
		cur = cur->next;
	if (cur->name[0] != '\0')
	{
		parent = cur;
		cur->next = (t_table *)malloc(sizeof(t_table));
		cur = cur->next;
		cur->name[0] = '\0';
		cur->next = NULL;
	}
	if (parent != NULL)
		parent->next = cur;
	ft_strcpy(cur->name, name);
}

int	find_name(t_table **names, char *name)
{
	t_table *cur;

	cur = names[hash_key(name)];
	while (cur != NULL && ft_strcmp(cur->name, name))
	{
		cur = cur->next;
	}
	if (cur == NULL)
		return (0);
	if (!ft_strcmp(cur->name, name))
		return (1);
	return (0);
}

int	main(void)
{
	int		N, M;
	int		cnt;
	char	input[21];
	t_table	*names[500001];
	char	**dict;

	init_table(names);
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", input);
		input_table(names, input);
	}
	dict = (char **)malloc(sizeof(char *) * (M));
	cnt = 0;
	for (int i = 0; i < M; i++)
	{
		scanf("%s", input);
		if (find_name(names, input))
		{
			dict[cnt] = (char *)malloc(sizeof(char) * 21);
			ft_strcpy(dict[cnt], input);
			cnt++;
		}
	}
	qsort(dict, cnt, sizeof(char *), compare);
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++)
	{
		printf("%s\n", dict[i]);
	}
	return (0);
}