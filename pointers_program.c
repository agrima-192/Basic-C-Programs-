#include <stdio.h>

int main() {
    int arr[2] = {25, 38};
    
    int *ptr;
    int X;

    ptr = arr;

    X = *ptr++;
    printf("After X = *ptr++:\n");
    printf("X = %d, *ptr = %d (pointer now points to next element)\n\n", X, *ptr);

    ptr = arr;

    X = *++ptr;
    printf("After X = *++ptr:\n");
    printf("X = %d, *ptr = %d\n\n", X, *ptr);

    ptr = arr;

    X = ++*ptr;
    printf("After X = ++*ptr:\n");
    printf("X = %d, *ptr = %d\n\n", X, *ptr);

    ptr = arr;

    X = (*ptr)++;
    printf("After X = (*ptr)++:\n");
    printf("X = %d, *ptr = %d\n\n", X, *ptr);

    return 0;
}
