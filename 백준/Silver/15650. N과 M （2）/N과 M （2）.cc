#include <iostream>

using namespace std;

int N, M;
int arr[8] = {
    0,
};

void print() {
  int i;

  for (i = 0; i < M - 1; i++) {
    cout << arr[i] << ' ';
  }
  cout << arr[i] << '\n';
}

void solve(int cnt) {
  if (cnt == M) {
    print();
    return;
  }
  for (int i = arr[cnt - 1] + 1; i <= N; i++) {
    arr[cnt] = i;
    solve(cnt + 1);
    arr[cnt] = 0;
  }
}

int main(void) {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  cin >> N >> M;

  solve(0);
}