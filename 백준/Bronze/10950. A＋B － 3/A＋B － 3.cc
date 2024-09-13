#include <stdio.h>
int add(int a,int b);

int main(void)
{
    int T;
    scanf("%d",&T);

    for (int i = 0; i < T; i++) {
        int a, b;
        scanf("%d %d",&a, &b);
        printf("%d\n", add(a, b));
    }

}

int add(int a,int b) {
    return a+b;
}
