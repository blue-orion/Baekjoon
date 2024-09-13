#include <stdio.h>

int main(void) {
    /* 두 행렬의 크기 N과 M이 주어지면
    두 행렬을 더하는 문제*/
    int size1, size2;
    scanf("%d %d", &size1, &size2);

    int arrA[100][100] = {{0,}, {0,}};
    int arrB[100][100] = {{0,}, {0,}};
    int sumarr[100][100] = {{0,}, {0,}};
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            scanf("%d", &arrA[i][j]);
        }
    }
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            scanf("%d", &arrB[i][j]);
            sumarr[i][j] = arrA[i][j] + arrB[i][j];
            printf("%d ", sumarr[i][j]);
        }
        puts("");
    }
    return 0;
}