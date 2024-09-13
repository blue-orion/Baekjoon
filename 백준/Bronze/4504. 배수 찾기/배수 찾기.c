#include <stdio.h>
int multiple(int num, int N);

int main(void)
{
    int N;
    scanf("%d",&N);
    int num;
    while (1) {
        num = 0;
        scanf("%d",&num);
        if (num == 0) {return 0; }
        else {multiple(num, N); }
    }
}

int multiple(int num, int N) {
    if (num % N == 0) {
        printf("%d is a multiple of %d.\n",num, N);
    }
    else {printf("%d is NOT a multiple of %d.\n",num, N); }
}