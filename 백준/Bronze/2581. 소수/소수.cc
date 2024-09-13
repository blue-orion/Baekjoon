#include <stdio.h>

int main(void)
{
    int array[10001] = {2,3, };
    int a;
    for (int i = 3; i < 10001; i++) {
        a = 0;
        for (int j = 1; j < 10001; j++) {
            if (array[j-1] == 0) {
                continue;
            }
            if (i % array[j-1] == 0) {
                a = 1;
            }
        }
        if (a == 0) {
            array[i-2] = i;
        }
    }
    int M, N;
    scanf("%d %d", &M, &N);
    int min = N;
    int decimal[10000] = {0, };
    int sum = 0;
    for (int i = 0; i < 10000; i++) {
        if (array[i] >= M && array[i] <= N) {
            decimal[i] = array[i];
            sum += decimal[i];
        }
        if (decimal[i] != 0) {
            if (decimal[i] < min)
                min = decimal[i];
        }
    }

    int b = 0;
    if (min == N) {
        if (M == N) {
            for (int i = 0; i < 10001; i++) {
                if (decimal[i] == N) {
                    b = 1;
                }
            }
            if (b == 0)
                printf("%d",-1);
            else {
                printf("%d\n%d", sum, min);
            }    
        }
        else {
            min = -1;
            printf("%d",min);
        }
    }
    else {
        printf("%d\n%d",sum, min);
    }

    return 0;
}