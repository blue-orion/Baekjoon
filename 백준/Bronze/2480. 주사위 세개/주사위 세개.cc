#include <stdio.h>
int sum(int a) {
    int sum = 0;
    for (int i = 0; i < a; i++) {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int num[3] = {0, };
    for (int i = 0; i < 3; i++) {
        scanf("%d",&num[i]);
    }
    
    int a,b,c;
    a = (num[0] == num[1]) ? num[0]: 0;
    b = (num[1] == num[2]) ? num[1]: 0;
    c = (num[0] == num[2]) ? num[0]: 0;
    
    if (num[0] == num[1] && num[1] == num[2]) {
        printf("%d",10000 + num[0]*1000);
    }
    else if ( a == num[0] || c == num[0]) {
        printf("%d",1000 + num[0]*100);
    }
    else if ( b == num[1] ) {
        printf("%d",1000 + num[1]*100);
    }
    else {
        int max = 0;
        for (int i = 0; i < 3; i++) {
            if (num[i] > max) {
                max = num[i];
            }
        }
        printf("%d", max * 100);
    }
    return 0;
}