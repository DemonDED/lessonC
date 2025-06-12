#include <stdio.h>

int main( void ) {
   int array1[ 3 ] = { 0 };

   printf("array1 = %p\narray1[0] = %p", array1, &array1[0]);

   return 0;
}
