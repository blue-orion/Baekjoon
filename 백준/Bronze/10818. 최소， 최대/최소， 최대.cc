#include <stdio.h>

int main(void) 
{
    int N;
    scanf("%d", &N);
    int array[N];
    int min = 1000000, max = -1000000;
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        max = (array[i] > max) ? array[i] : max;
        min = (array[i] < min) ? array[i] : min; 
    }
    printf("%d %d", min, max);

    return 0;
}