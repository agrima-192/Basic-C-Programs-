#include <stdio.h>
int main() {
    int numbers[10];
    int i;           

    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        }
    printf("\nElements stored in the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    return 0;
}
