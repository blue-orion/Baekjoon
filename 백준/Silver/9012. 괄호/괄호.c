#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist {
    char value;
    struct linkedlist* next;
}linked;

void push(linked** list);
void pop(linked** list);
void read(linked* list);
void freelist(linked** list);
int fl = 0;
int main(void)
{
    int tc;
    scanf("%d\n", &tc);
    linked* list;
    list = NULL;
    char input[51];
    int j = 0;
    for (int i = 0; i < tc; i++) {
        gets(input);
        fl = 0;
        freelist(&list);
        j = 0;
        while (input[j] != '\0') {
            if (input[j] == '(') {
                push(&list);
                fl++;
            }
            else if (input[j] == ')') {
                pop(&list);
                fl--;
            }
            j++;
        }
        if (fl == 0 && list == NULL) {
            printf("YES\n");
        }
        else printf("NO\n");
    }
    return 0;
}

void push(linked** list) {
    linked* next_link = (linked*) malloc(sizeof(linked));
    if (next_link == NULL) {
        printf("Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    next_link->value = '(';
    next_link->next = *list;
    *list = next_link;
}

void pop(linked** list) {
    linked *prev, *cur;
    cur = *list;
    if (*list == NULL) {
        return;    
    }
    else {
        prev = cur->next;
        free(cur);
        *list = prev;
    }
}

void read(linked* list) {
    while (list != NULL) {
        printf("%c", list->value);
        list = list->next;
    }
}

void freelist(linked** list) {
    while (*list != NULL) {
        pop(list);
    }
}