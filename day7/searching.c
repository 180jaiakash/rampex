#include <stdio.h>

int main() {
    int arr[] = {8, 10, 11, 12, 70,60,65,968,65,97,544,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 50;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Number %d found at position %d.\n", key, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Number %d not found in the array.\n", key);
    }

    return 0;
}