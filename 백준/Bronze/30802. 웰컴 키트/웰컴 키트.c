#include <stdio.h>

int main(void) {
  int N;
  int arr[6];
  int i;
  int T;
  int P;
  int cnt;

  scanf("%d", &N);
  i = 0;
  while (i < 6) {
    scanf("%d", &arr[i]);
    i++;
  }
  scanf("%d %d", &T, &P);
  i = 0;
  cnt = 0;
  while (i < 6) {
    if (arr[i] % T == 0)
    {
      cnt += arr[i] / T;
    }
    else
    {
      cnt += arr[i] / T + 1;
    }
    i++;
  }
  printf("%d\n", cnt);
  printf("%d %d", N / P, N % P);
  return (0);
}