#include <stdio.h>

int main() {
   int number1, number2, result;

   puts("Enter two numbers pls");
   
   scanf("%d%d", &number1, &number2);

   result = number1 + number2;
   printf("Sum %d and %d - %d\n", number1, number2, result);
   result = number1 * number2;
   printf("Product %d and %d - %d\n", number1, number2, result);
   result = number1 - number2;
   printf("Difference %d and %d - %d\n", number1, number2, result);
   result = number1 / number2;
   printf("Quotient %d and %d - %d\n", number1, number2, result);
   result = number1 % number2;
   printf("Module %d and %d - %d\n", number1, number2, result);

   return 0;

}
