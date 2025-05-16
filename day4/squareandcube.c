#include <stdio.h>
int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  int square = number * number;
  int cube = number * number * number;

  printf("The square of %d is %d\n", number, square);
  printf("The cube of %d is %d\n", number, cube);

  return 0;
}

OUTPUT:

Enter a number: 5
The square of 5 is 25
The cube of 5 is 125

