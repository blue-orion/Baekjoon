#include <stdio.h>

int main(void)
{
    int total;
    int price[10] = {0};

    scanf("%d", &total);

    for (int i = 0; i < 9; i++) {
        scanf("%d", &price[i]);
        total = total - price[i];
    }
    printf("%d", total);
    return 0;
}