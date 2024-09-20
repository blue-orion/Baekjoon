#include <stdio.h>

int main(void) {
  int s, t, d;

  scanf("%d %d %d", &s, &t, &d);
  printf("%d", t * (d / (s * 2)));
  return (0);
}