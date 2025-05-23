#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter dimensions (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int arr[x][y][z];

    // Input values
    printf("Enter %d values:\n", x * y * z);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Output values
    printf("The 3D array is:\n");
    for (int i = 0; i < x; i++) {
        
        printf("Layer %d:\n", i);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}