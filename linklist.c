#include<stdio.h>
struct node{
       int data1;
       struct node *next;
};

int main(){
    struct node n1, n2, n3, n4, n5;
    
    n1.data1=10;
    n2.data1=20;
    n3.data1=30;
    n4.data1=40;
    n5.data1=50;
    
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
    n5.next=NULL;
    
    struct node*current=&n2;
    printf("Linked list elements: ");
    while (current != NULL) {
          printf("%d ", current->data1);
          current = current->next;
          }
    printf("\n");

    return 0;
}
