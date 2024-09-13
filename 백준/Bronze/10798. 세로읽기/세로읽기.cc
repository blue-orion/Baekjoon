#include <stdio.h>
int main(void)
{
    char array[5][15]={'\0', };
    //문자열 입력받기
    for (int i = 0; i < 5; i++) {
        scanf("%s", array[i]);
    }

    //문자열 공백 없이 출력
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (array[j][i] != '\0') {printf("%c",array[j][i]); }
            else {continue; }
        }
    }
    return 0;
}