#include <stdio.h>

int main(void)
{   
    int mingook[4] = {0, }, manse[4] = {0, };
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d",&mingook[i]);
        sum1 += mingook[i];
    }
    for (int i = 0; i < 4; i++) {
        scanf("%d",&manse[i]);
        sum2 += manse[i];
    }
    
    if (sum1 >= sum2) {
        printf("%d",sum1);
    }
    else {
        printf("%d",sum2);
    }
}
