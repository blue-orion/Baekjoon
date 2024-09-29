#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

typedef struct s_dress
{
	char	name[21];
}	t_dress;

typedef struct s_dressroom
{
	char	where[21];
	char	names[31][21];
	int		cnt;
}	t_dressroom;

void	init(t_dressroom *str[31])
{
	for (int i = 0; i < 31; i++)
	{
		str[i] = (t_dressroom *)malloc(sizeof(t_dressroom));
		str[i]->where[0] = '\0';
		str[i]->cnt = 0;
		for (int j = 0; j < 31; j++)
			str[i]->names[j][0] = '\0';
	}
}

void	find_where(t_dressroom *room[31], char *name, char *where)
{
	int i = 1;	
	while (i < 31 && room[i]->where[0] != '\0')
	{
		if (!ft_strcmp(room[i]->where, where))
		{
			room[i]->cnt++;
			return ;
		}
		i++;
	}
	ft_strcpy(room[i]->where, where);
	room[i]->cnt++;
}

int	find_result(t_dressroom *room[31], int n)
{
	int	tmp = 1;

	for (int i = 1; i <= n; i++)
	{
		tmp *= (room[i]->cnt + 1);
	}
	tmp -= 1;
	return (tmp);
}

int main(void)
{
	int		tc;
	int		n;
	int		res = 0;
	char	input_name[21];
	char	input_where[21];
	t_dressroom	*clothes[31];

	init(clothes);
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++)
	{
		res = 0;
		init(clothes);
		scanf("%d", &n);
		for (int j = 1; j <= n; j++)
		{
			scanf("%s %s", input_name, input_where);
			find_where(clothes, input_name, input_where);
		}
		int	n;
		for (n = 1; n < 31 && clothes[n]->where[0] != '\0'; n++)
			;
		res = find_result(clothes, n - 1);
		printf("%d\n", res);
	}
}