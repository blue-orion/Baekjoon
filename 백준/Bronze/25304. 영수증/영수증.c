#include <stdio.h>

int main(void) {
    //총 금액, 종류의 수, 구매한 각 물건의 가격과 개수를 입력 받아
    int total_input, typenum, price[100], num[100];
    scanf("%d %d", &total_input, &typenum);
    //입력 제한
    if (total_input < 1 || total_input > 1000000000) return 0;
    if (typenum < 1 || typenum > 100) return 0;

    for (int i = 0; i < typenum; i++) {
        scanf("%d %d", &price[i], &num[i]);
        //입력 제한
        if (price[i] < 1 || price[i] > 1000000) return 0;
        if (num[i] < 1 || num[i] > 10) return 0;
    }
    //영수증에 적힌 총 금액과 일치하는지 검사
    int sum = 0;
    for (int i = 0; i < typenum; i++) {
        sum += price[i] * num[i];
    }
    //일치하면 Yes, 아니면 No 출력
    if (sum == total_input) printf("Yes");
    else printf("No");
    
}