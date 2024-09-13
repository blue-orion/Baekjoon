#include <stdio.h>
#include <stdlib.h>
void ordering(int* arr, int idx_num) {
    for (int i = 0; i < idx_num - 1; i++) {
        for (int j = 0; j < idx_num - 1; j++) {
            if (*(arr + j) > *(arr + j+1)) {
                int tmp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
            } 
        }
    }
}
int main(void)
{
    int classnum, stnum;
    int* grade = NULL;
    scanf("%d", &classnum);

    for (int i = 0; i < classnum; i++) {
        scanf("%d", &stnum);
        grade = (int*) malloc(stnum * sizeof(int));
        for (int j = 0; j < stnum; j++) {
            scanf("%d", &grade[j]);
        }
        ordering(grade, stnum);
        int max = 0, min = 100, gap, max_gap = 0;
        for (int j = 0; j < stnum; j++) {
            if (grade[j] > max) {
                max = grade[j];
            }
            if (grade[j] < min) {
                min = grade[j];
            }
            if (j == stnum - 1) {
                break;
            }
            gap = grade[j+1] - grade[j];
            if (gap > max_gap) {
                max_gap = gap;
            }
        }
        printf("Class %d\n", i+1);
        printf("Max %d, Min %d, Largest gap %d\n", max, min, max_gap);
        
    }
    return 0;
}