//Program to read a list of integers and store it in a single dimensional array & to find the frequency of a particular number in a list of integers.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d integers:\n", n);
    // Read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int search_num;
    printf("Enter the number to find the frequency of: ");
    scanf("%d", &search_num);

    int frequency = 0;
    // Iterate through the array to find the frequency of search_num
    for (int i = 0; i < n; i++) {
        if (arr[i] == search_num) {
            frequency++;
        }
    }
    printf("The number %d appears %d times in the array.\n", search_num, frequency);
    return 0;
}

