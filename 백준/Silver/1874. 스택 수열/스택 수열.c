#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	int	*value;
	int	size;
	int	last;
	int	*pop_value;
	char	*op;
	int	pop_idx;
	int	op_idx;
}	t_stack;

void	push(t_stack *st, int key)
{
	st->op[st->op_idx++] = '+';
	if (st->last != st->size)
		st->value[++st->last] = key;
}

void	pop(t_stack *st)
{
	st->op[st->op_idx++] = '-';
	st->pop_value[st->pop_idx++] = st->value[st->last];
	if (st->last != 0)
		st->last--;
}

int	main(void)
{
	int	n;
	int	*res;
	t_stack *st = (t_stack *)malloc(sizeof(t_stack));

	scanf("%d", &n);
	res = (int *)malloc(sizeof(int) * n);
	st->pop_value = (int *)malloc(sizeof(int) * n);
	st->op = (char *)malloc(sizeof(char) * (2 * n));
	st->value = (int *)malloc(sizeof(int) * (n + 1));
	st->size = n;
	st->last = 0; st->pop_idx = 0; st->op_idx = 0;
	for (int i = 0; i < n; i++)
		scanf("%d", &res[i]);
	int j = 0;
	int i = 2;
	push(st, 1);
	while (i <= n)
	{
		if (st->value[st->last] < res[j])
		{
			push(st, i);
			i++;
		}
		if (st->value[st->last] == res[j])
		{
			pop(st);
			j++;
		}
		while (st->value[st->last] > res[j])
		{
			printf("NO");
			return (0);
		}
	}
	while (st->last != 0)
	{
		pop(st);
	}
	i = 0;
	// while (i < n)
	// {
	// 	printf("%d ", st->pop_value[i]);
	// 	i++;
	// }
	// puts("");
	i = 0;
	while (i < 2 * n)
	{
		printf("%c\n", st->op[i]);
		i++;
	}
}