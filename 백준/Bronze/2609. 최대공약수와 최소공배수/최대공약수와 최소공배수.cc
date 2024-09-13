#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d",&a, &b);

    if (a < 0 || a > 10000)
        return 0;
    if (b < 0 || b > 10000)
        return 0;
    int max;
    for (int i = 1; i < 10000; i++) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }
        
    }  
    printf("%d\n%d", max, a*b/max);
    return 0;
}