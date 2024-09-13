#include <stdio.h>
long long multi(int num) {
    long long a = 1;
    for (int i = 0; i < num; i++) {
        a *= 10;
    }
    return a;
}

int main(void)
{
// 0의 아스키코드값 48
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int array[11] = {0, };
    int result = A * B * C;
    char re[11];
    for (int i = 10; i >= 0; i--) {
        re[10 - i] = result / multi(i);
        result = result - re[10-i] * multi(i);
    }
    
    int fl = 0, idx = 0;
    while(fl == 0) {
        if (re[idx] != 0) {
            fl = 1;
            break;
        }
        else {idx ++; }
    }
    
    for (int i = idx; i < 11; i++) {
        for (int j = 0; j < 10; j++) {
            if (re[i] == j) {
                array[j]++;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", array[i]);
    }
    return 0;
}