#include <stdio.h>
#include <stdlib.h>

//몸무게와 키를 통해 등수를 매기는 프로그램
int main(void) {
    //(키, 몸무게)로 입력 받아
    //B보다 A의 키와 몸무게가 모두 더 커야 덩치가 크다.
    //1등 1명, 2등 3명일 경우 나머지 한 명은 5등이 됨.
    //(자신보다 더 덩치가 큰 사람의 수 + 1)등
    int n;
    scanf("%d", &n);
    int** arr = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(3*sizeof(int));
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
            cnt++;
        }
        arr[i][2] = cnt+1;
    }
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][2]);
    }
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }

    return 0;
}
