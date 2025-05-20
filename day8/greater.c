#include <stdio.h>

// Function to find the greater of two numbers
int greater(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = greater(num1, num2);

    printf("The greater number is: %d\n", result);

    return 0;
}