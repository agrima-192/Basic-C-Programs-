#include <stdio.h>

void modifyValues(int *ptr1, int *ptr2) {
    *ptr1 = 100;
    *ptr2 = 200;
    printf("\nInside function: \nValue of var1 = %d, Value of var2 = %d\n", *ptr1, *ptr2);
}

int main() {
    int varA = 10;
    int varB = 20;

    printf("\nBefore function call: \nValue of varA = %d, Value of varB = %d\n", varA, varB);
    modifyValues(&varA, &varB);
    printf("\nAfter function call: \nValue of varA = %d, Value of varB = %d\n", varA, varB);

    return 0;
}
