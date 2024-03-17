//
// Created by hlyan on 3/17/24.
//
#include "library_t.h"
#include <stdio.h>

void stackInit(Stack *s) {
    s->top = -1;
}

int stackPush(Stack *s, int data) {
    if (s->top == MAX_STACK_SIZE - 1) {
        printf("Stack Overflow!\n");
        return -1;
    }
    s->top++;
    s->arr[s->top] = data;
    return 0;
}

int stackPop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    s->top--;
    return 0;
}

int stackPeek(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    printf("%d\n", s->arr[s->top]);
    return 0;
}

int stackPrint(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
    return 0;
}
