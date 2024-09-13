#include <stdio.h>
int sort(int *array);

int main(void)
{
    int ar[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &ar[i]);
        if (ar[i] < 1 || ar[i] > 1000000) return 0;
    }
    sort(ar);
    printf("%d %d %d", ar[0], ar[1], ar[2]);
}

int sort(int *array) {
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 2; i++) {
            if (*(array+i) > *(array+i+1)) {
                int tmp;
                tmp = *(array+i+1);
                *(array+i+1) = *(array+i);
                *(array+i) = tmp; 
            }
        }
    }
}