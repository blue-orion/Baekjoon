#include <stdio.h>
#include <string.h>

int main(void)
{
    // 학생 수 입력
    int num;
    scanf("%d",&num);

    // num만큼 학생 이름 입력
    char name[100][16];
    int dd[100], mm[100], yyyy[100];

    for (int i = 0; i < num; i++) {
        scanf("%s",name[i]);
        scanf("%d %d %d",&dd[i],&mm[i],&yyyy[i]);
    }

    // 생일비교하기
    char young[16], old[16];
    int max[3]={1, 1, 1990}, min[3]={31,12,2010};

    for (int i = 0; i < num; i++) {
        if (yyyy[i] > max[2]) {
            max[2] = yyyy[i];
            strcpy(young, name[i]);
        }
        else if (yyyy[i] == max[2]) {
            if (mm[i] > max[1]) {
                max[1] = mm[i];
                strcpy(young, name[i]);
            }
            else if (mm[i] == max[1]) {
                if (dd[i] > max[0]) {
                    max[0] = dd[i];
                    strcpy(young, name[i]);
                }
            }
        }
    }

    for (int i = 0; i < num; i++) {
        if (yyyy[i] < min[2]) {
            min[2] = yyyy[i];
            min[1] = mm[i];
            min[0] = dd[i];
            strcpy(old, name[i]);
        }
        else if (yyyy[i] == min[2]) {
            if (mm[i] < min[1]) {
                min[1] = mm[i];
                min[0] = dd[i];
                strcpy(old, name[i]);
            }
            else if (mm[i] == min[1]) {
                if (dd[i] < min[0]) {
                    min[0] = dd[i];
                    strcpy(old, name[i]);
                }
            }
        }
    }
    printf("%s\n%s", young, old);
    return 0;
}