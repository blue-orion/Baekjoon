#include <stdio.h>
#include <stdlib.h>

typedef struct s_que
{
	int	*value;
	int	front;
	int	rear;
	int	size;
}	t_que;

void	init_que_value(t_que *q)
{
	int	i;

	i = 0;
	while (i < q->size + 1)
		q->value[i++] = 0;
}

int		is_empty(t_que *q)
{
	if (q->front == q->rear)
		return (1);
	return (0);
}

int		is_full(t_que *q)
{
	if ((q->rear + 1) % (q->size + 1) == q->front)
		return (1);
	return (0);
}

void	enque(t_que *q, int num)
{
	if (is_full(q))
		return ;
	q->value[++(q->rear)] = num;
}

int		deque(t_que *q)
{
	if (is_empty(q))
		return (-1);
	return (q->value[(q->front)++]);
}

void	move_big(t_que *q)
{
	int	fl;
	int	max;
	int	idx;
	int	i;

	i = 1;
	fl = 0;
	max = q->value[(q->front + 1) % (q->size + 1)];
	while (i < q->size)
	{
		if (q->value[(q->front + i + 1) % (q->size + 1)] > max)
		{
			max = q->value[(q->front + i + 1) % (q->size + 1)];
			idx = (q->front + i) % (q->size + 1);
			fl = 1;
		}
		i++;
	}
	if (fl)
		q->front = idx;
}

void	print_que(t_que *q, int to_find)
{
	int	i;
	int	fl;

	i = 0;
	fl = 0;
	while (i < q->size)
	{
		if (q->value[(q->front + 1) % (q->size + 1)] == 0)
			q->front = (q->front + 1) % (q->size + 1);
		move_big(q);
		if (to_find == q->front)
			printf("%d\n", i + 1);
		q->front = (q->front + 1) % (q->size + 1);
		//		printf("%d", q->value[(++(q->front)) % (q->size + 1)]);
		q->value[q->front] = 0;
		i++;
	}
}

void	basic_print(t_que *q)
{
	while (!is_empty(q))
	{
		printf("%d", q->value[++(q->front)]);
	}
}

int	main(void)
{
	t_que	*que = (t_que *)malloc(sizeof(t_que));
	int	tc;
	int	N;
	int	M;
	int	doc;
	int	i;
	int	j;

	scanf("%d", &tc);
	i = 0;
	while (i < tc)
	{
		scanf("%d %d", &N, &M);
		que->value = (int *)malloc(sizeof(int) * (N + 1));
		que->front = 0;
		que->rear = 0;
		que->size = N;
		init_que_value(que);
		j = 0;
		while (j < N)
		{
			scanf("%d", &doc);
			enque(que, doc);
			j++;
		}
		print_que(que, M);
		free(que->value);
		i++;
	}
	return (0);
}