#include <stdio.h>
int main(void)
{
    int M, N;
    scanf("%d %d", &M, &N);
    int sum=0, min=10000;
    // 제한된 범위 내에서 실행
    if (M >= 0 && M <= 10000 && M <= N) {
        for (int i=0; i<=100; i++) {
            if (i*i>=M && i*i<=N) {
                sum += i*i;
                if (i*i < min)
                    min = i*i;
            }
        }
        if (sum==0)
            printf("-1");
        else
            printf("%d\n%d",sum,min);
            return 0;
    }
    else
        return 0;

    return 0;
}