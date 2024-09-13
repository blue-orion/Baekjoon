#include <stdio.h>
int main(void)
{
    //입력
    int N;
    scanf("%d",&N);
    //별찍기
    for (int i=N; i>0; i--) {
        for (int j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}