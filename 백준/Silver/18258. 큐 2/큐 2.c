#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_que
{
  int *key;
  int size;
  int front;
  int post;
} t_que;

// Push
void  push(t_que *q, int num)
{
  q->key[(++(q->post)) % q->size] = num;
}


// size
void  size(t_que *q)
{
  printf("%d\n", (q->post - q->front + q->size) % q->size);
}

// empty
int is_empty(t_que *q)
{
  if (q->front == q->post)
  {
    return (1);
  }
  return (0);
}

// pop
void  pop(t_que *q)
{
  if (is_empty(q))
  {
    printf("-1\n");
    return ;
  }
  printf("%d\n", q->key[(++q->front) % q->size]);
}

// front
void  front(t_que *q)
{
  if (is_empty(q))
  {
    printf("-1\n");
    return ;
  }
  printf("%d\n", q->key[(q->front + 1) % q->size]);
}

// back
void  back(t_que *q)
{
  if (is_empty(q))
  {
    printf("-1\n");
    return ;
  }
  printf("%d\n", q->key[q->post]); }

int ft_strcmp(char *str1, char *str2)
{
  int i;

  i = 0;
  while (str1[i] != '\0' && str2[i] != '\0')
  {
    if (str1[i] != str2[i])
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
  int N;
  t_que *que;
  char command[10];
  int input;

  scanf("%d", &N);
  que = (t_que *)malloc(sizeof(t_que));
  que->key = (int *)malloc(sizeof(int) * (N + 1));
  que->size = N + 1;
  que->front = 0;
  que->post = 0;

  for (int i = 0; i < N; i++)
  {
    scanf("%s", command);
    if (ft_strcmp(command, "push"))
    {
      scanf("%d", &input);
      push(que , input);
    }
    else if (ft_strcmp(command, "pop"))
      pop(que);
    else if (ft_strcmp(command, "size"))
      size(que);
    else if (ft_strcmp(command, "empty"))
    {
      if (is_empty(que))
        printf("1\n");
      else
        printf("0\n");
    }
    else if (ft_strcmp(command, "front"))
      front(que);
    else if (ft_strcmp(command, "back"))
      back(que);
  }
}
