// Program to compute the length of a Linked list.

#include <stdio.h>

struct Node {
    int data;          
    struct Node* next; 
};

int length(struct Node* head) {
    int count = 0;          
    struct Node* current = head; 
    while (current != NULL) {
        count++;            
        current = current->next; 
    }
    return count;
}

int main() {
    struct Node head_node;
    struct Node second_node;
    struct Node third_node;
    head_node.data = 10;
    second_node.data = 20;
    third_node.data = 30;
    head_node.next = &second_node;
    second_node.next = &third_node;
    third_node.next = NULL; 
    printf("The length of the linked list is: %d\n", length(&head_node)); 
    return 0;
}
