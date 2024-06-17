#include <stdio.h>

int main(void) {
  int number1, number2;

  printf("Enter two numbers: \n");

  scanf("%d%d", &number1, &number2);
  
  printf("%d + %d = %d\n", number1, number2, number1 + number2);
  printf("%d - %d = %d\n", number1, number2, number1 - number2);
  printf("%d * %d = %d\n", number1, number2, number1 * number2);
  printf("%d / %d = %d\n", number1, number2, number1 / number2);
  printf("%d // %d = %d\n", number1, number2, number1 % number2);

  return 0;
}