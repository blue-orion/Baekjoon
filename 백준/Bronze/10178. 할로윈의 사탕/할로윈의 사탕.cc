#include <stdio.h>

int main(void)
{
    int tc;
    scanf("%d",&tc);

    for (int i = 0; i < tc; i++) {
        int num = 0, bro = 0;
        scanf("%d %d", &num, &bro);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", num/bro, num % bro);
    }
    return 0;
}