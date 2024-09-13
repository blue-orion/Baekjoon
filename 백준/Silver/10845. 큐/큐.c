#include <stdio.h>
#include <stdlib.h>
#include <string.h>
enum command {PUSH, POP, SIZE, EMPTY, FRONT, BACK};
int what_command(char* name);
void push(int* queue, int num);
void pop(int* queue);
int size();
void empty();
void front(int* queue);
void back(int* queue);
int start = 0, end = -1;
int changeint(char* number) {
    int num = atoi(number+5);
    return num;
}
int main(void)
{
    int N;
    scanf("%d\n", &N);
    int* que = (int*) malloc(N*sizeof(int));

    char input[11];
    enum command s;
    for (int i = 0; i < N; i++) {
        gets(input);
        s = what_command(input);
        switch (s) {
        case PUSH:
            push(que, changeint(input));
            break;
        case POP:
            pop(que);
            break;
        case SIZE:
            printf("%d\n", size());
            break;
        case EMPTY:
            empty();
            break;
        case FRONT:
            front(que);
            break;
        case BACK:
            back(que);
            break;
        default:
            break;
        }
    }
    return 0;
}

int what_command(char* name) {
    enum command a;
    if (strncmp(name, "push", 4) == 0) a = PUSH;
    else if (strncmp(name, "pop", 3) == 0) a = POP;
    else if (strncmp(name, "size", 4) == 0) a = SIZE;
    else if (strncmp(name, "empty", 5) == 0) a = EMPTY;
    else if (strncmp(name, "front", 5) == 0) a = FRONT;
    else if (strncmp(name, "back", 4) == 0) a = BACK;
    return a;
}

void push(int* queue, int num) {
    end++;
    queue[end] = num;
}
void pop(int* queue) {
    // queue가 비어있는 상황
    if (size() == 0) {
        printf("%d\n", -1);
    }
    else {
        printf("%d\n", queue[start]);
        queue[start] = 0;
        start++;
    }
}
int size() {
    return end - start + 1;
}

void empty() {
    if (size() == 0) printf("%d\n", 1);
    else printf("%d\n", 0);
}

void front(int* queue) {
    if (size() == 0) printf("%d\n", -1);
    else printf("%d\n", queue[start]);
}

void back(int* queue) {
    if (size() == 0) printf("%d\n", -1);
    else printf("%d\n", queue[end]);
}
