#include <stdio.h>
int main() {
    int num1, num2, temp;
    
    printf("Enter the first number:");
    scanf("%d", &num1);
    
    printf("Enter the second number:");
    scanf("%d", &num2);
    
    printf("BEFORE SWAPPING: num1 = %d , num2 = %d\n" , num1, num2);
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    printf("AFTER SWAPPING: num1 = %d , num2 = %d\n" , num1, num2);
    return 0;
}

OUTPUT:

Enter the first number:6
Enter the second number:7
BEFORE SWAPPING: num1 = 6 , num2 = 7
AFTER SWAPPING: num1 = 7 , num2 = 6
