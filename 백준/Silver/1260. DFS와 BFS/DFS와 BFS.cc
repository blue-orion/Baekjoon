#include <iostream>
#include <queue>

using namespace std;

int	N, M, V;
int	graph[1001][1001];
bool	visited[1001];

void	dfs(int v) {
	cout << v << ' ';
	visited[v] = true;
	for (int i = 0; i <= N; i++) {
		if (graph[v][i] == 1 && !visited[i]) {
			dfs(i);
		}
	}
}

void	bfs(int v) {
	queue<int>	q;
	q.push(v);
	visited[v] = true;

	while (!q.empty()) {
		int	cur = q.front();
		q.pop();
		cout << cur << ' ';
		for (int i = 1; i <= N; i++) {
			if (graph[cur][i] == 1 && !visited[i]) {
				q.push(i);
				visited[i] = true;
			}
		}
	}
}

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int	x, y;
		cin >> x >> y;
		graph[x][y] = 1;
		graph[y][x] = 1;
	}
	dfs(V);
	cout << '\n';
	for (int i = 0; i <= N; i++) visited[i] = false;
	bfs(V);
	cout << '\n';
}