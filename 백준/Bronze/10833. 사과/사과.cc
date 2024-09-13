#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    if (N < 0 || N > 100) {
        return 0;
    }

    int num, apple;
    int remain = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d %d",&num, &apple);
        if ((num < 0 || num > 100) && (apple < 0 || apple > 100))
            return 0;
        remain += apple % num;
    }
    printf("%d",remain);

    return 0;
}