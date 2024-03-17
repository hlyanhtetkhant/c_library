//
// Created by hlyan on 3/13/24.
//
#include <stdio.h>
#include <stdlib.h>
#include "library_t.h"


int main() {
    // Initialize an empty linked list
    Node* head = NULL;

    // Insert some elements into the linked list
    insertNode(&head, 5);
    insertNode(&head, 10);
    insertNode(&head, 15);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Delete a node from the linked list
    deleteNode(&head, 10);

    // Print the linked list after deletion
    printf("Linked List after deleting node with key 10: ");
    printList(head);

    // Free memory occupied by the linked list
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    // Now let's use the stack

    Stack stack;
    stackInit(&stack);

    // Push elements onto the stack
    stackPush(&stack, 25);
    stackPush(&stack, 30);
    stackPush(&stack, 35);

    // Print the stack
    printf("Stack: ");
    stackPrint(&stack);

    // Pop an element from the stack
    stackPop(&stack);

    // Print the stack after popping
    printf("Stack after popping: ");
    stackPrint(&stack);

    return 0;
}
