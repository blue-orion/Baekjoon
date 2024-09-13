#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n < 1 || n > 10000)
        return 0;
    int sum=0;
    for (int i = 1; i < n+1; i++) {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}