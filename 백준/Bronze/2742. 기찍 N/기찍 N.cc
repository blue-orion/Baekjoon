#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    if (n < 0 || n > 100000)
        return 0;

    for (int i = 0; i < n; i++) {
        printf("%d\n",n-i);
    }
}