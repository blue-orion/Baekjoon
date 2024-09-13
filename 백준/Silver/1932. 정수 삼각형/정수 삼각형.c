#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int N;
    scanf("%d", &N);

    int** array = (int**) malloc(N * sizeof(int*));
    for (int i = 0; i < N; i++) {
        array[i] = (int*) malloc((i+1) * sizeof(int));
    } 
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i+1; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i+1; j++) {
            if (i == 0) {array[i][j] = array[i][j]; break; }
            if (j == 0) {
                array[i][j] = array[i][j] + array[i-1][j];
            }
            else if (i == j) {
                array[i][j] = array[i][j] + array[i-1][j-1];
            }
            else if (array[i][j] + array[i-1][j-1] > array[i][j] + array[i-1][j]){
                array[i][j] = array[i][j] + array[i-1][j-1];
            }
            else {array[i][j] = array[i][j] + array[i-1][j]; }           
        }
    }
    
    int max = 0;
    for (int i = 0; i < N; i++) {
        if (array[N-1][i] >= max) {
            max = array[N-1][i];
        }
    }

    printf("%d", max);
    return 0;   
}