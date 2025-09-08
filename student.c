#include <stdio.h>
int main()
{
    char name[20];
    int roll_no;
    char address[20];
    printf("enter name: \n");
    scanf("%s" , &name);
    printf("enter address: \n");
    scanf("%s" , &address);
    printf("enter roll no.: \n");
    scanf("%d" , &roll_no);
    printf("name of student :%s \n",name);
    printf("roll no is :%d \n",roll_no);
    printf("address of student :%s \n",address);
    return 0;
}   
