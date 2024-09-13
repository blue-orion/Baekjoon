#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i < 2*N; i++) {
        for(int j = 0; i>N ? j < N-(2*N-i): j < N-i; j++) {
            printf(" ");
        }
        for (int j = 0; i>N ? j < 2*N-i : j < i; j++) {
            printf("*");
        }
        for (int j = 0; i>N ? j < 2*N-1-i : j < i-1; j++) {
            printf("*");
        }
        puts("");
    }
    return 0;
}