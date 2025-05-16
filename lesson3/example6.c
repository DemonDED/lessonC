/* Использование continue в цикле for */

#include <stdio.h>

int main(void) {
   int x;

   for ( x = 1; x <= 10; x++ ) {
      if ( x == 5 ) {
         continue;
      }

      printf( "%d\n", x );
   }

   puts( "Used continue to skip printing the value 5" );
   return 0;
}
