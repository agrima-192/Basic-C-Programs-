// Program to search a node at any position in the linked List 
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

int searchNode(struct Node* head, int key) {
    struct Node* current = head;
    int index = 0;
    while (current != NULL) {
        if (current->data == key) {
            return index;
        }
        current = current->next;
        index++;
    }
    return -1;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation error\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    struct Node* last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = newNode;
}
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);
    printf("Created linked list: ");
    printList(head);
    int keyToFind = 30;
    int position = searchNode(head, keyToFind);
    if (position != -1) {
        printf("Element %d found at index position %d.\n", keyToFind, position);
    } else {
        printf("Element %d not found in the list.\n", keyToFind);
    }
    int absentKey = 99;
    position = searchNode(head, absentKey);
    if (position != -1) {
        printf("Element %d found at index position %d.\n", absentKey, position);
    } else {
        printf("Element %d not found in the list.\n", absentKey);
    }
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
