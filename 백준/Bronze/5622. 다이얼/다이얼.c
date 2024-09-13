#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[16] = {0, };
    scanf("%s", s);
    int sec = 0;
    int len = strlen(s);
    int posi[16] = {0, };
    //입력받은 문자열의 각 알파벳이 위치한 숫자 찾기
    //각 자리에서 찾은 숫자+1 을 하여 더한 후 출력
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
            posi[i] = 2;
        else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
            posi[i] = 3;
        else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
            posi[i] = 4;
        else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
            posi[i] = 5;
        else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
            posi[i] = 6;
        else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
            posi[i] = 7;
        else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
            posi[i] = 8;
        else if (s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z')
            posi[i] = 9;
    }

    for (int i = 0; i < len; i++) {
        sec = sec + posi[i]+1;
    }
    printf("%d", sec);
    return 0;
}