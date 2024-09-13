#include <stdio.h>
int main(void)
{
    //입력
    int N;
    scanf("%d",&N);
    //별찍기
    for (int i=0; i<N; i++) {
        for(int j=0; j<i; j++)
            printf(" ");
        for(int j=0; j<N-i; j++)
            printf("*");
        if (i==N-1)
            return 0;
        printf("\n");
    }
    return 0;
}