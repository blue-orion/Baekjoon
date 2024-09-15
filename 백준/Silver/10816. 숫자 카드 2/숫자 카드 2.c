#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int	key;
	int	value;
	struct s_node *next;
}	t_node;

void	init_map(t_node **map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		map[i] = NULL;
		i++;
	}
}

int		hash(int key)
{
	if (key < 0)
	{
		key = -key;
	}
	return (key % 500001);
}

void	add_node(t_node **map, int key)
{
	int		idx;
	t_node	*cur;
	t_node	*post;
	t_node	*new;

	idx = hash(key);
	cur = map[idx];
	if (cur == NULL)
	{
		map[idx] = (t_node *)malloc(sizeof(t_node));
		map[idx]->key = key;
		map[idx]->value = 1;
		map[idx]->next = NULL;
		return ;
	}
	while (cur != NULL)
	{
		post = cur;
		if (cur->key == key)
		{
			cur->value++;
			return ;
		}
		else
		{
			cur = cur->next;
		}
	}
	if (cur == NULL)
	{
		new = (t_node *)malloc(sizeof(t_node));
		new->key = key;
		new->value = 1;
		new->next = NULL;
		post->next = new;
	}
}

void	print_value(t_node **map, int key)
{
	t_node	*cur;
	int		idx;

	idx = hash(key);
	cur = map[idx];
	while (cur != NULL)
	{
		if (cur->key == key)
		{
			printf("%d", cur->value);
			return ;
		}
		else 
		{
			cur = cur->next;
		}
	}
	printf("0");
	return ;
}

int	main(void)
{
	int	N;
	int	i;
	int	card;
	t_node *map[500001];

	init_map(map, 500001);
	scanf("%d", &N);
	i = 0;
	while (i < N)
	{
		scanf("%d", &card);
		add_node(map, card);
		i++;
	}
	scanf("%d", &N);
	i = 0;
	while (i < N - 1)
	{
		scanf("%d", &card);
		print_value(map, card);
		printf(" ");
		i++;
	}
	scanf("%d", &card);
	print_value(map, card);
	return (0);
}