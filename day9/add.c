#include <stdio.h>

// Function to add three numbers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int result = add(2, 4, 8);
    printf("Sum of 2, 4, 8 is: %d\n", result);
    return 0;
}