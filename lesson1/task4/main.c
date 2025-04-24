#include <stdio.h>

int main() {
   int number1, number2;

   puts("Enter two numbers");

   scanf("%d%d", &number1, &number2);

   if (number1 == number2) {
      puts("This number are equal.");
      return 0;
   }
   if (number1 > number2) {
      printf("%d is larger\n", number1);
      return 0;
   }
   if (number1 < number2) {
      printf("%d is larger\n", number2);
      return 0;
   }
}
