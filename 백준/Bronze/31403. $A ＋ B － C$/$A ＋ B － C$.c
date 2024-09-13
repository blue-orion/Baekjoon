#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n)
{
  char *res;
  int i;

  res = malloc(sizeof(char) *  5);
  res[4] = '\0';
  i = 3;
  while (n != 0)
  {
    res[i] = n % 10 + '0';
    i--;
    n /= 10;
  }
  return (res + i + 1);
}

int ft_atoi(char *str)
{
  int len;
  int res;
  int i;

  len = 0;
  while (str[len] != '\0')
    len++;
  res = 0;
  i = 0;
  while (i < len)
  {
    res = res * 10 + str[i] - '0';
    i++;
  }
  return (res);
}

char *ft_strcat(char *dest, char *src)
{
  int i = 0;
  int dest_len;

  dest_len = 0;
  while (dest[dest_len] != '\0')
    dest_len++;
  while (src[i] != '\0')
  {
    dest[i + dest_len] = src[i];
    i++;
  }
  dest[i + dest_len] = '\0';
  return (dest);
}

int main(void)
{
  int A;
  int B;
  int C;
  char *str_A;
  char *str_B;
  char *result;

  result = malloc(sizeof(char) * 10);
  for (int i = 0; i < 10; i++)
    result[i] = '\0';
  scanf("%d %d %d", &A, &B, &C);
  printf("%d\n", A + B - C);
  str_A = ft_itoa(A);
  str_B = ft_itoa(B);
  result = ft_strcat(result, str_A);
  result = ft_strcat(result, str_B);
  printf("%d", ft_atoi(result) - C);
  return (0);
}
