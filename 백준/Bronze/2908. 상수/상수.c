#include <stdio.h>
int reverse(int *a);

int main(void)
{
    int num[3];
    int comp[2];
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 3; i++) {
            scanf("%1d",&num[i]);
        }
        comp[j] = reverse(num);
    }
    if (comp[0] > comp[1]) {
        printf ("%d", comp[0]);
    }
    else {
        printf("%d", comp[1]);
    }

}

int reverse(int *a) {
    int tmp;
    tmp = a[2];
    a[2] = a[0];
    a[0] = tmp;
    int num1;
    num1 = a[0]*100 + a[1]*10 + a[2];
    return num1;
}