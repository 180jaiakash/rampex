#include <stdio.h>

int main() {
    int number;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check divisibility
    if (number % 5 == 0 && number % 11 == 0) {
        printf("The number %d is divisible by both 5 and 11.\n", number);
    } else {
        printf("The number %d is not divisible by both 5 and 11.\n", number);
    }

    return 0;
}