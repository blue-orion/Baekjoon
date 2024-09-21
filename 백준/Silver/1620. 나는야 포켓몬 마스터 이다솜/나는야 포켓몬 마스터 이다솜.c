#include <stdio.h>
#include <stdlib.h>

typedef struct s_poke
{
	int				idx;
	char			name[21];
	struct s_poke	*next;
}	t_poke;

int		ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
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

int		ft_atoi(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int		is_num(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int		hash_key_str(char *str)
{
	int i = 0;
	int sum = 0;
	while (str[i] != '\0')
	{
		sum += str[i];
		i++;
	}
	sum %= 100001;
	return (sum);
}

void	init_lib(t_poke **lib)
{
	int	i;

	i = 0;
	while (i < 100001)
	{
		lib[i] = (t_poke *)malloc(sizeof(t_poke));
		lib[i]->idx = 0;
		lib[i]->next = NULL;
		i++;
	}
}

void	input_lib(t_poke **lib, char *name, int idx)
{
	t_poke	*cur;
	t_poke	*parent = NULL;

	int	key = hash_key_str(name);
	cur = lib[key];
	while (cur->next != NULL)
		cur = cur->next;
	while (cur->idx != 0)
	{
		parent = cur;
		cur->next = (t_poke *)malloc(sizeof(t_poke));
		cur = cur->next;
	}
	if (parent != NULL)
		parent->next = cur;
	cur->idx = idx;
	ft_strcpy(cur->name, name);
	cur->next = NULL;
}

int		ft_strlen(char *str)
{
	int cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

void	print_idx(t_poke *lib, char *name)
{
	t_poke *cur;

	cur = lib;
	while (cur != NULL && ft_strcmp(cur->name, name))
	{
		cur = cur->next;
	}
	if (cur == NULL)
		return ;
	printf("%d\n", cur->idx);
}

int	main(void)
{
	int	N, M;
	int	key;
	t_poke	*lib[100001];
	char	input[21];
	char	**lib2;

	scanf("%d %d", &N, &M);
	init_lib(lib);
	lib2 = (char **)malloc(sizeof(char *) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", input);
		lib2[i] = (char *)malloc(sizeof(char) * (ft_strlen(input) + 1));
		ft_strcpy(lib2[i], input);
		input_lib(lib, input, i + 1);
	}

	for (int i = 0; i < M; i++)
	{
		scanf("%s", input);
		if (is_num(input))
		{
			int	n;

			n = ft_atoi(input);
			printf("%s\n", lib2[n - 1]);
		}
		else
		{
			key = hash_key_str(input);
			print_idx(lib[key], input);
		}
	}
}