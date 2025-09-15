// program to print even no.s only using while loop
#include<stdio.h>
int main(){
    int i =1;
    while(i<=100)
    { if(i%2==0) //even
    printf("%d \n",i);
    i++;
    }
    return 0;
} 
