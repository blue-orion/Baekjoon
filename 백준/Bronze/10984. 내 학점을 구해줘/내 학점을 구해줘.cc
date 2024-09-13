#include <stdio.h>

int main(void)
{
    int semester, num, credit[11] = {0, }; 
    float grade[11] = {0, };
    int sum_credit = 0;
    float sum_grade = 0;
        
    scanf("%d", &semester);
// 1<=num<=10, 1<=credit<=6, G={0, 0.7, 2, 2.3, 2.7, 3, 3.3, 3.7, 4, 4.3}
    for (int i = 0; i < semester; i++) {
        num = 0;
        sum_credit = 0;
        sum_grade = 0;
        scanf("%d", &num);
        for (int j = 0; j < num; j++) {
            scanf("%d %f", &credit[j], &grade[j]);
            sum_credit += credit[j];
            sum_grade += (float) credit[j] * grade[j];
        }
        
        printf("%d %.1f\n", sum_credit, sum_grade / (float) sum_credit);
    }
    return 0;
}