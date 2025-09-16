#include <iostream>

using namespace std;

char map[600][600];
char visited[600][600];
int	n;
int	m;

int	cnt = 0;

int	wh[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void	solve(int x, int y, int past) {
	if (x < 0 || y < 0 || x >= m || y >= n)
		return ;
	if (map[y][x] == 'X')
		return ;
	if (map[y][x] == 'P') {
		cnt++;
	}
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		if (visited[y + wh[i][1]][x + wh[i][0]])
			continue ;
		solve(x + wh[i][0], y + wh[i][1], i);
	}
}

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	
	int	player[2];
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'I') {
				player[0] = i;
				player[1] = j;
			}
		}
	}

	solve(player[1], player[0], -1);
	if (cnt == 0) {
		cout << "TT" << '\n';
	}
	else
		cout << cnt << '\n';
	return 0;
}