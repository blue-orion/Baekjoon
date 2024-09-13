#include <stdio.h>

int main(void) {
  int A;
  int B;
  double result;

  scanf("%d %d", &A, &B);
  if (B == 0)
    return (0);
  result = (double)A / B;
  printf("%.10f", result);
  return (0);
}
