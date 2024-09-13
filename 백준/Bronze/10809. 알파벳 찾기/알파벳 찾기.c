#include <stdio.h>
#include <string.h>
//문자열의 길이를 담는 전역 변수
int len;
//문자열이 처음 나오는 곳을 찾으면 출력 후 종료
void first(char* str, char alpha) {
    for(int i = 0; i < len; i++) {
        if ( *(str + i) == alpha) {
            printf("%d ", i);
            return 0;
        }
    }
    printf("-1 ");
}

int main(void)
{
    char s[101] = {0, };
    scanf("%s", s);
    len = strlen(s);

    for (char alpha = 97; alpha < 123; alpha++) {
        first(s, alpha);
    }
    return 0;
}