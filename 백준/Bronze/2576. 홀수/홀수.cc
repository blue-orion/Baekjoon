#include <stdio.h>

int main(void)
{   
    int array[7] = {0, };
    int min = 100;
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        scanf("%d",&array[i]);
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
        if (array[i] > 0) {
            sum += array[i];
            if (array[i] < min) {
                min = array[i];
            }
        }
    }
    if (sum == 0) {
        printf("-1");
    }
    else {
        printf("%d\n%d",sum, min);
    }
    return 0;
}
