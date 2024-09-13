#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    //입력 값 제한
    if (a < -10000 || a > 10000) {return 0;}
    if (b < -10000 || b > 10000) {return 0;}
    
    if (a > b) {printf(">");}
    else if (a < b) {printf("<");}
    else {printf("==");}

    return 0;
}
