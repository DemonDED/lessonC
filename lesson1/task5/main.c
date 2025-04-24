#include <stdio.h>

int main() {
   int number1, number2, number3;

   puts("Enter three numbers pls");

   scanf("%d%d%d", &number1, &number2, &number3);

   printf("Sum is %d\n", number1 + number2 + number3);
   printf("Average is %d\n", (number1 + number2 + number3) / 3);
   printf("Product is %d\n", number1 * number2 * number3);

   if (number1 > number2) {
      if (number1 > number3) {
         printf("Largest is %d\n", number1);
         if (number2 > number3) {
            printf("Smallest is %d\n", number3);
         }
         if (number2 < number3) {
            printf("Smallest is %d\n", number2);         
         }
      }
   }

   if (number1 < number2) {
      if (number2 > number3) {
         printf("Largest is %d\n", number2);
         if (number1 > number3) {
            printf("Smallest is %d\n", number3);
         }
         if (number1 < number3) {
            printf("Smallest is %d\n", number1);
         }  
      }
   }

      if (number3 > number2) {
            if (number3 > number1) {
            printf("Largest is %d\n", number3);
            if (number2 > number1) {
               printf("Smallest is %d\n", number1);
            }
            if (number2 < number1) {
               printf("Smallest is %d\n", number2);
            }  
         }
      }

   return 0;
}
