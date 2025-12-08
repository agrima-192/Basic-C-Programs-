/* Program to insert a node
         a.At the beginning 
         b.At the end
         c.At any position 
in the Single Linked List. */

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head_ref;
    *head_ref = newNode;
    printf("Inserted %d at the beginning.\n", data);
}

void insertAtEnd(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        printf("Inserted %d at the end (list was empty).\n", data);
        return;
    }

    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
    printf("Inserted %d at the end.\n", data);
}

void insertAtPosition(struct Node** head_ref, int data, int position) {
    if (position < 1) {
        printf("Invalid position. Position should be >= 1.\n");
        return;
    }
    if (position == 1) {
        insertAtBeginning(head_ref, data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = *head_ref;
    int currentPos = 1;
    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }
    if (temp == NULL) {
        printf("Position %d is out of bounds.\n", position);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d.\n", data, position);
}

void printList(struct Node* head) {
    struct Node* temp = head;
    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    printf("--- Demonstrating Insertion Functions ---\n");
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    printList(head);

    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    printList(head);

    insertAtPosition(&head, 25, 3);
    printList(head);
    insertAtPosition(&head, 5, 1);
    printList(head);
    insertAtPosition(&head, 50, 8);
    printList(head);

    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    head = NULL;
    return 0;
}
