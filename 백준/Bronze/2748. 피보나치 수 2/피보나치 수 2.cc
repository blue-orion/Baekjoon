#include <stdio.h>

int main(void)
{
    long long fibo[91] = {0, 1, };
    int n;
    scanf("%d",&n);
    if (n < 0 || n > 90)
        return 0;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    printf("%lld", fibo[n]);
    return 0;
}