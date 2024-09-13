#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int* stack, int num);
void pop(int* stack);
void size();
void empty();
void top(int* stack);
int ord = -1;

int main(void)
{
    int* stack = NULL;
    int N;
    scanf("%d\n", &N);
    stack = (int*)malloc(N * sizeof(int));
    char command[10];
    int push_num;
    int number;
    for (int i = 0; i < N; i++) {
        gets(command);
        if (strncmp(command, "pop", 3) == 0)
            number = 0;
        else if (strncmp(command, "size", 4) == 0)
            number = 1;
        else if (strncmp(command, "empty", 5) == 0)
            number = 2;
        else if (strncmp(command, "top", 3) == 0)
            number = 3;
        else if (strncmp(command, "push", 4) == 0)
            number = 4;
        else
            number = 5;
        switch (number) {
            case 0:
                pop(stack);
                break;
            case 1:
                size();
                break;
            case 2:
                empty();
                break;
            case 3:
                top(stack);
                break;
            case 4:
                push_num = atoi(&command[5]);
                push(stack, push_num);
                break;
        }
    }
    return 0;
}

void push(int* stack, int num) {
    stack[ord+1] = num;
    ord++;
}

void pop(int* stack) {
    if (ord == -1)
        printf("%d\n", -1);
    else {
        printf("%d\n", stack[ord]);
        stack[ord+1] = 0;
        ord--;
    }
}

void size() {
    printf("%d\n", ord+1);
}

void empty() {
    if (ord == -1) 
        printf("%d\n", 1);
    else 
        printf("%d\n", 0);
}

void top(int* stack) {
    if (ord == -1) 
        printf("%d\n", -1);
    else 
        printf("%d\n", stack[ord]);
}