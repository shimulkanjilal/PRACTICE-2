#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number (1-100): ");
    scanf("%d", &num1);

    printf("Enter the second number (1-100): ");
    scanf("%d", &num2);

        if (num1 < 1 || num1 > 100 || num2 < 1 || num2 > 100) {
        printf("Please enter numbers between 1 and 100.\n");
    return 1;
    }

    if (num1 % 2 == 0) {
        printf("%d is even.\n", num1);
    } else {
        printf("%d is odd.\n", num1);
    }

    if (num2 % 2 == 0) {
        printf("%d is even.\n", num2);
    } else {
        printf("%d is odd.\n", num2);
    }

    return 0;
}
