#include <iostream>

using namespace std;

int	map[50][50];
int	xpos[4] = {0, 0, -1, 1};
int	ypos[4] = {1, -1, 0, 0};
int	m, n, num;
int	loopCnt;
int	result;

void	dfs(int x, int y) {
	map[x][y] = 0;
	for (int i = 0; i < 4; i++) {
		int	xx = x + xpos[i];
		int yy = y + ypos[i];
		if (xx < 0 || yy < 0 || xx >= m || yy >= n) continue;
		if (map[xx][yy] == 1) {
			dfs(xx, yy);
		}
	}
}

int	main(void) {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> loopCnt;

	for (int i = 0; i < loopCnt; i++) {
		result = 0;
		cin >> m >> n >> num;
		for (int j = 0; j < num; j++) {
			int	x, y;
			cin >> x >> y;
			map[x][y] = 1;
		}
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				if (map[j][k] == 1) {
					dfs(j, k);
					result++;
				}
			}
		}
		cout << result << '\n';
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				map[j][k] = 0;
			}
		}
	}
}