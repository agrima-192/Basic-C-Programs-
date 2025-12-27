#include <stdio.h>

int main() {
    int arr_int[] = {10, 20, 30};
    char arr_char[] = {'a', 'b', 'c'};
    int *ptr_int = arr_int;
    char *ptr_char = arr_char;

    printf("Initial Addresses and Values:\n");
    printf("Int Pointer Address: %p, Value: %d\n", (void*)ptr_int, *ptr_int);
    printf("Char Pointer Address: %p, Value: %c\n", (void*)ptr_char, *ptr_char);

    ptr_int++;
    ptr_char++;

    printf("\nAddresses and Values After Incrementing by 1:\n");
    printf("Int Pointer Address: %p, Value: %d\n", (void*)ptr_int, *ptr_int);
    printf("Char Pointer Address: %p, Value: %c\n", (void*)ptr_char, *ptr_char);

    ptr_int--;
    ptr_char--;

    printf("\nAddresses and Values After Decrementing by 1:\n");
    printf("Int Pointer Address: %p, Value: %d\n", (void*)ptr_int, *ptr_int);
    printf("Char Pointer Address: %p, Value: %c\n", (void*)ptr_char, *ptr_char);

    return 0;
}
