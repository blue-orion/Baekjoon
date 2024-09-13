#include <stdio.h>

int main(void) {
  int N;
  int is_prime;
  int i;
  int j;
  int fl;
  int cnt;

  scanf("%d", &N);
  i = 0;
  cnt = 0;
  while (i < N) {
    scanf("%d", &is_prime);
    fl = 1;
    if (is_prime < 2) {
      i++;
      continue;
    }
    if (is_prime == 2) {
      cnt++;
      i++;
      continue;
    }
    j = 2;
    while (j <= is_prime / j) {
      if (is_prime % j == 0) {
        fl = 0;
        break;
      }
      j++;
    }
    if (fl == 1) {
      cnt++;
    }
    i++;
  }
  printf("%d", cnt);
  return (0);
}