#include <stdio.h>
int main() {
    float length, width, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}

OUTPUT:

Enter the length of the rectangle: 6
Enter the width of the rectangle: 4
Area of the rectangle: 24.00
Perimeter of the rectangle: 20.00
