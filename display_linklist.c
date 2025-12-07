// Program to display the Linked List 

#include <stdio.h>

struct Node {
int data;
struct Node* next;
};

void displayList(struct Node* head) {
struct Node* current = head;
printf("Linked List (Static Allocation): ");
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}

int main() {
struct Node head_node;
struct Node second_node;
struct Node third_node;
head_node.data = 100;
second_node.data = 200;
third_node.data = 300;
head_node.next = &second_node;
second_node.next = &third_node;
third_node.next = NULL;
displayList(&head_node);
return 0;
}
