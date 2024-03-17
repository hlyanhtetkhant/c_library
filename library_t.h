//
// Created by hlyan on 3/13/24.
//
#ifndef DDSA_LIBRARY_T_H
#define DDSA_LIBRARY_T_H

// Define the structure for a node
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Linked list function prototypes
Node* createNode(int data);
void insertNode(Node** headRef, int data);
void deleteNode(Node** headRef, int key);
void printList(Node* head);

// Define the structure for the stack
#define MAX_STACK_SIZE 5

typedef struct Stack {
    int arr[MAX_STACK_SIZE];
    int top;
} Stack;

// Stack function prototypes
void stackInit(Stack *s);
int stackPush(Stack *s, int data);
int stackPop(Stack *s);
int stackPeek(Stack *s);
int stackPrint(Stack *s);

#endif // DDSA_LIBRARY_T_H
