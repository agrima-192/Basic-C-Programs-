#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    printf("Enter numbers (enter 0 to stop):\n");
    while (1) { // Infinite loop, will be broken by 'break' when 0 is entered
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num == 0) {
            zeroCount++;
            break; // Exit the loop if 0 is entered
        } else if (num > 0) {
            positiveCount++;
        } else { // num < 0
            negativeCount++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Positive numbers: %d\n", positiveCount);
    printf("Negative numbers: %d\n", negativeCount);
    printf("Zero numbers: %d\n", zeroCount);
    return 0;
}
