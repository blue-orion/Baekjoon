#include <stdio.h>

int main(void)
{
    int ca;
    scanf("%d", &ca);

    for (int i = 0; i < ca; i++) {
        int price = 0, num = 0;
        scanf("%d %d", &price, &num);
        int sum = price;
        for (int j = 0; j < num; j++) {
            int q = 0, p = 0;
            scanf("%d %d",&q, &p);
            sum += q*p;
        }
        printf("%d\n", sum);
    }
    return 0;
}