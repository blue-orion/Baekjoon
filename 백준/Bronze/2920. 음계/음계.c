#include <stdio.h>

int main(void) {
  int arr[8];
  int asc;
  int desc;
  int i;

  i = 0;
  while (i < 8)
    scanf("%d", &arr[i++]);
  i = 0;
  asc = 0;
  desc = 0;
  while (i < 7) {
    if (arr[i] < arr[i + 1]) {
      asc++;
    }
    if (arr[i] > arr[i + 1]) {
      desc++;
    }
    i++;
  }
  if (asc == 7)
    printf("ascending");
  else if (desc == 7)
    printf("descending");
  else
    printf("mixed");
}
