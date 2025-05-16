#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Compare the numbers
    if (num1 >= num2) {
        printf("%d is greater than or equal to %d\n", num1, num2);
    } else {
        printf("%d is smaller than %d\n", num1, num2);
    }

    return 0;
}
