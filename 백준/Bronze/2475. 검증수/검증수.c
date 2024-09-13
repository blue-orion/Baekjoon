#include <stdio.h>

int main(void) {
  int arr[5];
  int res;
  int i;

  i = 0;
  res = 0;
  while (i < 5) {
    scanf("%d", &arr[i]);
    res += arr[i] * arr[i];
    i++;
  }
  printf("%d", res % 10);
  return (0);
}
