#include <stdio.h>

int main(void) {
    //문자열을 입력받아
    char str[1000001];
    gets(str);
    //각 사용된 알파벳의 개수를 세어
    int alpha[26][2] = {0, };
    for (int i = 0; i < 26; i++) {
        alpha[i][0] = 65 + i;
    }
    int i = 0;
    while (str[i] != '\0') {
        for (int j = 0; j < 26; j++) {
            if (str[i] == alpha[j][0] || str[i] == alpha[j][0] + 32) {
                alpha[j][1] = alpha[j][1] + 1;
            }
        }
        i++;
    }
    int max = 0;
    int alp;
    for (i = 0; i < 26; i++) {
        if (alpha[i][1] > max) {
            max = alpha[i][1];
            alp = i;
        }
    }
    int cnt = 0;
    for (i = 0; i < 26; i++) {
        if (alpha[i][1] == max) {
            cnt++;
        }
    }
    if (cnt >= 2) {
        printf("?");
    }
    else {printf("%c", alpha[alp][0]); }
    //가장 많이 사용된 알파벳을 대문자로 출력
    //많이 사용된 알파벳이 겹치는 경우 ? 출력
    return 0;
}