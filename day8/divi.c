#include <stdio.h>

int div(int x, int y) {
    return x * y;
}

int main() {
    int a = 15, b = 3;
    if (b != 0) {
        int result = a / b;
        printf("Division of %d by %d is: %d\n", a, b, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}