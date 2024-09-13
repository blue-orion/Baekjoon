#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int N;
  char *n;
  int i;
  int sum;

  sum = 0;
  scanf("%d", &N);
  n = (char *)malloc(sizeof(char) * (N + 1));
  scanf("%s", n);
  i = 0;
  while (i < N)
  {
    sum += n[i] - '0';
    i++;
  }
  printf("%d", sum);
  return (0);
}
