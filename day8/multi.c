#include <stdio.h>

int multi(int x, int y) {
    return x * y;
}

int main() {
    int result = multi(3, 5);
    printf("Sum of 3 and 5 is: %d\n", result);
    return 0;
}