#include <stdio.h>

int check_rep(int num, int *arr)
{
  for (int i = 0; i < 10; i++)
  {
    if (num == arr[i])
    {
      return (1);
    }
  }
  return (0);
}

int main(void)
{
  int arr[10];
  int i;
  int j;
  int repitition[10];
  int count;

  i = 0;
  while (i < 10)
  {
    scanf("%d", &arr[i]);
    arr[i] = arr[i] % 42;
    i++;
  }
  count = 0;
  i = 0;
  while (i < 10)
    repitition[i++] = 42;
  i = 0;
  j = 0;
  while (i < 10)
  {
    if (check_rep(arr[i], repitition))
        ;
    else 
    {
      count++;
      repitition[j] = arr[i];
      j++;
    }
    i++;
  }
  printf("%d", count);
  return (0);
}
