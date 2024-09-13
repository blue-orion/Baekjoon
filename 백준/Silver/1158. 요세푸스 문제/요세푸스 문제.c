#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int K;
  int N;
  int *arr;
  int i;
  int j;

  scanf("%d", &N);
  scanf("%d", &K);
  arr = (int *)malloc(sizeof(int) * N);
  for (int i = 0; i < N; i++) {
    arr[i] = i + 1;
  }
  j = 0;
  printf("<");
  i = 0;
  while (i < K * N) {
    if (arr[j % N] == 0)
      j++;
    else if (i == K * N - 1)
    {
      printf("%d", arr[j % N]);
      j++;
      i++;
    }
    else if (i % K == K - 1) {
      printf("%d, ", arr[j % N]);
      arr[j % N] = 0;
      j++;
      i++;
    }
    else
    {
      i++;
      j++;
    }
  }
  printf(">\n");
  return (0);
}
