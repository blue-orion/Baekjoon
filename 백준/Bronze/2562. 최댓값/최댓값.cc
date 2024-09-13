#include <stdio.h>

int main(void)
{
    int max = 0, turn = 0;
    for (int i = 0; i < 9; i++) {
        int n = 0;
        scanf("%d",&n);
        if (n > max) {
            max = n;
            turn = i+1;
        }
    }
    printf("%d\n%d",max , turn);
}