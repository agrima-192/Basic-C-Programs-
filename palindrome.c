//Program to find if a given number is a palindrome using functions palindrome() & reverse()
#include <stdio.h>
int reverse(int num) {
    int reversed_num = 0;
    int remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }
    return reversed_num;
}

int Palindrome(int num) {
    int original_num = num;
    int reversed_num = reverse(num);
    return original_num == reversed_num;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (Palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
