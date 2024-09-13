#include <stdio.h>
#include <string.h>

int main(void)
{
    int tc;
    scanf("%d",&tc);

    int price;
    int p;
    char name[21] = {0};

    int select_price[100] = {0};
    char select_name[100][21] = {0};

    if (tc < 0 || tc > 100)
        return 0;
    
    for (int i = 0; i < tc; i++) {
        scanf("%d",&p);
        if (p < 1 || p > 100)
            return 0;
        int max=0;
        for (int j = 0; j < p; j++) {
            scanf("%d",&price);
            scanf("%s",name);
            if (price >= max) {
                max = price;
                select_price[i] = price;
                strcpy(select_name[i], name);
            }
        }
    }
    
    for (int k = 0; k < tc; k++) {
        printf("%s\n",select_name[k]);
    }

    return 0;
}