#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tc, N;
    scanf("%d", &tc);
    int* arr = NULL;
    int sum = 0;
    for (int i = 0; i < tc; i++) {
        scanf("%d", &N);
        arr = (int*) malloc(N * sizeof(int));
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[j]);
        }
        sum = 0;
        for (int j = 0; j < N; j++) {
            sum += arr[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}