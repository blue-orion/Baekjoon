#include <stdio.h>
int add(int a,int b);

int main(void)
{
    int a, b;
    do {
        scanf("%d %d",&a, &b);
        if (a==0 && b==0) {
            return 0;
        }
        printf("%d\n", add(a,b));
    }
    while (a != 0 || b != 0);
    return 0;
}

int add(int a,int b) {
    return a+b;
}
