#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number (1-100): ");
    scanf("%d", &num1);

    printf("Enter the second number (1-100): ");
    scanf("%d", &num2);

    // Check if the numbers are within the range
    if (num1 < 1 || num1 > 100 || num2 < 1 || num2 > 100) {
        printf("Please enter numbers between 1 and 100.\n");
        return 1; // Exit the program with an error code
    }

    // Check if the first number is even or odd
    if (num1 % 2 == 0) {
        printf("%d is even.\n", num1);
    } else {
        printf("%d is odd.\n", num1);
    }

    // Check if the second number is even or odd
    if (num2 % 2 == 0) {
        printf("%d is even.\n", num2);
    } else {
        printf("%d is odd.\n", num2);
    }

    return 0; // Exit the program successfully
}

