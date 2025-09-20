// 
#include <stdio.h>
int selection(int age, float height) {
    // Condition for selection: age is less than 25 AND height is greater than 5 feet
    if (age < 25 && height > 5.0) {
        return 1; // Return 1 for selected
    } else {
        return 0; // Return 0 for not selected
    }
}

int main() {
    int candidate_age;
    float candidate_height;

    printf("Enter candidate's age: ");
    scanf("%d", &candidate_age);

    printf("Enter candidate's height (in feet): ");
    scanf("%f", &candidate_height);

    if (selection(candidate_age, candidate_height)) {
        printf("\nCandidate is selected.\n");
    } else {
        printf("\nCandidate is not selected.\n");
    }

    return 0;
}
