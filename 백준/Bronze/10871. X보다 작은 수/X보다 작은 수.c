#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, X;
    scanf("%d %d", &N, &X);
    int* arr = (int*)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < X) {printf("%d ", arr[i]);}
    }
    return 0;
}