// program to check if the given points are collinear or not 
#include<stdio.h>
int main() {
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1,x2,x3 :");
    scanf("%d%d%d", &x1,&x2,&x3);
    printf("Enter y1,y2,y3 :");
    scanf("%d%d%d", &y1,&y2,&y3);
    int area= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(area==0){
        printf("The points are collinear.");
    }
    else{
        printf("The points are not collinear.");
    }
    return 0;
}
