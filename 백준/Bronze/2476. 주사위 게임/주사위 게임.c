#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int N;
    scanf("%d", &N);

    int* money;
    money = (int*) malloc(N * sizeof(int));

    int dice[3] = {0, };
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &dice[j]);
        }
        if (dice[0] == dice[1] && dice[1] == dice[2]) {
            money[i] = 10000 + dice[0] * 1000;
        }
        else if (dice[0] == dice[1] || dice[1] == dice[2]) {
            money[i] = 1000 + dice[1] * 100;
        }
        else if (dice[0] == dice[2]) {
            money[i] = 1000 + dice[0] * 100;
        }
        else {
            int max = 0;
            for (int j = 0; j < 3; j++) {
                if (dice[j] > max) {
                    max = dice[j];
                }
            }
            money[i] = max * 100;
        }
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (money[i] > max) {
            max = money[i];
        }
    }
    printf("%d", max);
    return 0;
}
