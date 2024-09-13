#include <stdio.h>
int factorial(int a);

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
    
}

int factorial(int a) {
    if (a == 0)
        return 1;
    return a*factorial(a-1);
}