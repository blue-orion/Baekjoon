#include <stdio.h>
int main(void)
{
    // 9X9 배열 입력받기
    int array[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &array[i][j]);
            if (array[i][j] < 0 || array[i][j] >= 100) {
                return 0;
            }
        }
    }

    // 최댓값 비교하기
    int max = array[0][0];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max <= array[i][j]) {
                max = array[i][j];
            }
        }
    }
    printf("%d\n",max);

    // 최댓값의 행, 렬 인덱스 찾기
    int row, col;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max == array[i][j]) {
                row = i+1;
                col = j+1;
            }
        }
    }
    printf("%d %d",row,col);
    return 0;
}