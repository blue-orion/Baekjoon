#include <stdio.h>

int main(void)
{
  int a;
  int b;

  while (1)
  {
    if (scanf("%d %d", &a, &b) == -1)
        return (0);
    printf("%d\n", a + b);
  }
  return (0);
}
