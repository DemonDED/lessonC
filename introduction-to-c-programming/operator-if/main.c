#include <stdio.h>

int main(void) {
  int number1;
  int number2;

  printf("Enter two integers, and I will tell you\n");
  printf("the relationsip they statisfy: ");

  scanf("%d%d", &number1, &number2);

  if (number1 == number2) {
    printf("%d == %d\n", number1, number2);
  }

  if (number1 != number2) {
    printf("%d != %d\n", number1, number2);
  }

  if (number1 > number2) {
    printf("%d > %d\n", number1, number2);
  }

  if (number1 < number2) {
    printf("%d < %d\n", number1, number2);
  }

  if (number1 >= number2) {
    printf("%d >= %d\n", number1, number2);
  }
  
  if (number1 <= number2) {
    printf("%d <= %d\n", number1, number2);
  }
  
  return 0;
}