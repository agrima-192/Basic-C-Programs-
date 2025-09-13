// using ternary operator
#include <stdio.h>
int main() {
    int a, b, c, larger, largest;
    printf("Enter the values of num1, num2 and num3 : ");
    scanf("%d%d%d", &a,&b,&c);
    larger= a>b ? a:b;
    largest= larger>c ? larger:c;
    printf("the largest number is : %d\n", largest);
    
    return 0;
}
    
