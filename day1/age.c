#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18) {
        printf("You are older than 18.\n");
    } else {
        printf("You are 18 or younger.\n");
    }

    return 0;
}