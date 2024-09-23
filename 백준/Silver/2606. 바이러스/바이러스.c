#include <stdio.h>

void	init(int (*graph)[101])
{
	for (int i = 0; i < 101; i++)
	{
		for (int j = 0; j < 101; j++)
		{
			graph[i][j] = 0;
		}
	}
}

void	BFS(int (*graph)[101], int dest, int *res)
{
	int	i;

	if (res[dest] == 1)
		return ;
	res[dest] = 1;
	i = 0;
	while (graph[dest][i] != 0)
	{
		BFS(graph, graph[dest][i], res);
		i++;
	}
}

int	main(void)
{
	int	N, M;
	int	j;
	int	cnt = 0;
	int	idx, linked;
	int	graph[101][101];
	int	res[101] = {0, };

	init(graph);
	scanf("%d %d", &N, &M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d", &idx, &linked);

		j = 0;
		while (graph[idx][j] != 0)
			j++;
		graph[idx][j] = linked;
		j = 0;
		while (graph[linked][j] != 0)
			j++;
		graph[linked][j] = idx;
	}
	BFS(graph, 1, res);
	for (int i = 2; i <= N; i++)
	{
		if (res[i] == 1)
			cnt++;
	}
	// for (int i = 1; i <= N; i++)
	// {
	// 	printf("%d : ", i);
	// 	j = 0;
	// 	while (graph[i]->link[j] != 0)
	// 		printf("%d ", graph[i]->link[j++]);
	// 	printf("\n");
	// }
	printf("%d", cnt);
}