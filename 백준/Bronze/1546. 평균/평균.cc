#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    float sum = 0, max = 0;
    float score[1001] = {0, };
    for (int i = 0; i < N; i++) {
        scanf("%d",&score[i]);
        if (score[i] >= max) {
            max = score[i];
        }
    }

    for (int i = 0; i < N; i++) {
        score[i] = score[i]/max;
        sum += score[i];
    }
    printf("%.2f",sum / N * 100);
    return 0;
}
