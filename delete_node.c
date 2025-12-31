//WAP to delete a node from the link list as a function

#include<stdio.h>
#include<stdlib.h>

struct Node{
       int head;
       struct Node* next;
       };

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->head = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key) {
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // Case 1: If head node itself holds the key to be deleted
    if (temp != NULL && temp->head == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // Free old head
        printf("Node with data %d deleted (head node).\n", key);
        return;
}
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->head);
        node = node->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    printf("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    printf("Linked List after Deletion of 1: ");
    printList(head);

    deleteNode(&head, 7);
    printf("Linked List after Deletion of 7: ");
    printList(head);

    deleteNode(&head, 5); // Trying to delete a non-existent node
    printf("Linked List after attempting Deletion of 5: ");
    printList(head);

    deleteNode(&head, 2);
    printf("Linked List after Deletion of 2: ");
    printList(head);
    
    deleteNode(&head, 3);
    printf("Linked List after Deletion of 3: ");
    printList(head);

    return 0;
}
void deleteNodeAtAnyPos(struct Node** head, int position)
{
     if(*head==NULL)
     {
                    printf("List is empty.\n");
                    return;
     }
     
     struct Node* temp= *head;
     if (position==1)
     {
                     *head=temp->next;
                     free(temp);
                     return;
     }
     
     struct Node*prev=NULL;
     for(int i=0;i<position && temp!=NULL; i++){
             prev=temp;
             temp=temp->next;
             }
     
     if(temp=NULL){
                   printf("Invalid position!");
                   return;
                   }
     
     prev->next=temp->next;
     free(temp);
}
