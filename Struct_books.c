#include<stdio.h>
#include<string.h>
struct Books {
       char title[50];
       char author[20];
       char publisher[20];
       int page_no;
       float price;
       char edition[40];
       };
       
void printbook(struct Books book);
void printbook(struct Books book){
     printf("Book Title : %s \n", book.title);
     printf("Book Author : %s \n", book.author);
     printf("Book Publisher : %s \n", book.publisher);
     printf("Book Page No. : %d \n", book.page_no);
     printf("Book Price : %.2f \n", book.price);
     printf("Book Edition : %s \n", book.edition);
     }
     
int main(){
    struct Books book1; struct Books book2;
    strcpy(book1.title, "HARRY POTTER");
    strcpy(book1.author, "JK Rowling");
    strcpy(book1.publisher, "Bloomsbury");
    book1.page_no = 300;
    book1.price = 25.50;
    strcpy(book1.edition, "First Edition");

    strcpy(book2.title, "GITANJALI");
    strcpy(book2.author, "RABINDRANATH TAGORE");
    strcpy(book2.publisher, "Macmillan");
    book2.page_no = 150;
    book2.price = 12.75;
    strcpy(book2.edition, "Centenary Edition");
    
    printbook(book1);
    printf("\n");
    printbook(book2);

    return 0;
    }
