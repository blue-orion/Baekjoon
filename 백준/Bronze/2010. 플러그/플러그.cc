#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    int sum = 0, num = 0;
    for (int i = 0; i < N-1; i++) {
        num = 0;
        scanf("%d",&num);
        sum += num - 1;
    }
    num = 0;
    scanf("%d",&num);
    sum += num;
    printf("%d",sum);

    return 0;
}