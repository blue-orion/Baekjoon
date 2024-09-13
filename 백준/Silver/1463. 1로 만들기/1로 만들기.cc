#include <stdio.h>

int minimizeOperations(int N) {
    int dp[N + 1];
    dp[1] = 0;

    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1; // 1을 빼는 연산 횟수

        if (i % 2 == 0) {
            int divBy2 = dp[i / 2] + 1; // 2로 나누는 연산 횟수
            if (divBy2 < dp[i]) {
                dp[i] = divBy2;
            }
        }

        if (i % 3 == 0) {
            int divBy3 = dp[i / 3] + 1; // 3으로 나누는 연산 횟수
            if (divBy3 < dp[i]) {
                dp[i] = divBy3;
            }
        }
    }

    return dp[N];
}

int main() {
    int N;
    scanf("%d", &N);

    int result = minimizeOperations(N);

    printf("%d\n", result);
    return 0;
}
