#include <stdio.h>

int find_room(int h, int w, int to_find)
{
  int res;
  int i;

  res = 1;
  i = 0;
  while (i < to_find)
  {
    if (res > h * 100)
    {
      res = res % 100 + 100;
      res += 1;
    }
    else
    {
      res += 100;
    }
    i++;
  }
  return (res);
}

int main(void)
{
  int N;
  int h;
  int w;
  int i;
  int to_find;

  scanf("%d", &N);
  i = 0;
  while (i < N)
  {
    scanf("%d %d %d", &h, &w, &to_find);
    printf("%d\n", find_room(h, w, to_find));
    i++;
  }
}
