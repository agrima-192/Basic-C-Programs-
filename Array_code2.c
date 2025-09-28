#include <stdio.h>
 
int main() {
    int numbers[40];
    int i, sum = 0;
    float average;
 
    printf("Enter 40 integers: ");
    for(i = 0; i < 40; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
        }
    
    average = (float)sum / 40;
 
    printf("Average = %.2f", average);
 
    return 0;
}
