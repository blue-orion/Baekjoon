#include <stdio.h>


struct triangle {
    int side1;
    int side2;
    int side3;
};

void sorted_case(struct triangle* t) {
    int tmp = 0;
    if (t->side1 > t->side2) {
        tmp = t->side2;
        t->side2 = t->side1;
        t->side1 = tmp;
    }
    if (t->side2 > t->side3) {
        tmp = t->side3;
        t->side3 = t->side2;
        t->side2 = tmp;
    }
    if (t->side1 > t->side3) {
        tmp = t->side3;
        t->side3 = t->side1;
        t->side1 = tmp;
    }
}


int main(void)
{
    struct triangle tc;
    while(1) {
        scanf("%d %d %d", &tc.side1, &tc.side2, &tc.side3);
        if (tc.side1 == 0 && tc.side2 == 0 && tc.side3 == 0) {
            break;
        }
        sorted_case(&tc);
        if (tc.side3 * tc.side3 == tc.side1 * tc.side1 + tc.side2 * tc.side2) {
            puts("right");
        }
        else {puts("wrong"); }
    }
    
    return 0;
}

