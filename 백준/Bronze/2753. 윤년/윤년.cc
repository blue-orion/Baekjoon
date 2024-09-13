#include <stdio.h>
int main(void)
{
    //입력
    int year;
    scanf("%d",&year);
    //범위 제한
    if (year < 1 || year > 4000)
        return 0;
    //출력
    if (year % 4 == 0) {
        if ((year % 100) == 0) {
            if(year % 400 == 0)
                printf("1");
            else   
                printf("0");
        }
        else printf("1");

    }
    else
        printf("0");
    
    return 0;
}