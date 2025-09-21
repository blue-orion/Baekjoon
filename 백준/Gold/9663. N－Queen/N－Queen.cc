#include <iostream>

using namespace std;

int cnt = 0;
int N;
int map[15] = {
    0,
};

void print() {
  for (int i = 1; i <= N; i++) {
    cout << map[i] << ' ';
  }
  cout << '\n';

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (map[i] != j)
        cout << '0';
      else
        cout << map[i];
    }
    cout << '\n';
  }
}

int can(int x, int y) {
  for (int i = 1; i <= y; i++) {
    if (map[i] == x) // 같은 세로 열
      return 0;
    if (i - y == map[i] - x || y - i == map[i] - x)
      return 0;
  }
  return 1;
}

void solve(int y) {
  if (y == N + 1) {
    cnt++;
    return;
  }

  for (int i = 1; i <= N; i++) {
    if (can(i, y)) {
      map[y] = i;
      solve(y + 1);
      map[y] = 0;
    }
  }
}

int main(void) {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N;

  solve(1);
  cout << cnt << '\n';
}