#include <stdio.h>

int main() {
    int i, j;
    unsigned long long factorial;

    for (i = 1; i <= 10; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        printf("Factorial of %d = %llu\n", i, factorial);
    }

    return 0;
}