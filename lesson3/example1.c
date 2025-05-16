// Повторение, управляемое счетчиком, с использованием оператора for

#include <stdio.h>

int main( void ) {
   unsigned int counter;

   for (counter = 1; counter <= 10; counter++) {
      printf("%d\n", counter);
   }

   return 0;

}
