#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int j;
  int line;
  char **result;
  int score[80] = {0, };
  int total;

  scanf("%d", &line);
  result = (char **)malloc(sizeof(char *) * line);
  for (int i = 0; i < line; i++)
  {
    result[i] = (char *)malloc(sizeof(char) * 80);
    scanf("%s", result[i]);
    j = 0;
    while (j < 80)
      score[j++] = 0;
    if (result[i][0] == 'O')
    {
      score[0] = 1;
    }
    j = 1;
    while (result[i][j] != '\0')
    {
      if (result[i][j] == 'O')
      {
        score[j] = score[j - 1] + 1;
      }
      j++;
    }
    total = 0;
    for (int k = 0; k < j; k++)
      total += score[k];
    printf("%d\n", total);
  }
}
