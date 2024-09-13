#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 100)
        return 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i-1; j++) {
            printf(" ");
        }       
        for (int q = 0; q < n-i; q++) {
            printf("*");
        }
        for (int q = 0; q < n-i+1; q++) {
            printf("*");
        }     
        printf("\n");
    }
    return 0;
}