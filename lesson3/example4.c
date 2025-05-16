/* Оператор do...while */

#include<stdio.h>

int main(void) {
   unsigned int counter = 1;

   do {
      printf( "%d ", counter );
   } while ( ++counter <= 10 );

   return 0;
}
