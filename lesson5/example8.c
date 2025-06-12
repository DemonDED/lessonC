#include <stdio.h>

// Статические и автоматические локальные массивы
void staticArrayInit( void );
void automaticArrayInit( void );

int main( void ) {
   puts("First call to each function:");

   staticArrayInit();
   automaticArrayInit();

   puts("Second call to each function:");

   staticArrayInit();
   automaticArrayInit();


   return 0;
}

void staticArrayInit( void ) {
   static int array1[ 3 ];
   int i;

   puts("\nValues in exiting staticArrayInit:");

   for (i = 0; i <= 2; i++) {
      printf("array1[ %d ] = %d  \n", i, array1[ i ]);
   }

   puts("\nValues on exiting staticArrayInit:");

   for (i = 0; i < 3; i++) {
      printf("array1[ %d ] = %d\n", i, array1[ i ] += 5);
   }
}

void automaticArrayInit( void ) {
   int array2[ 3 ] = { 1, 2, 3 };
   int i;

   puts("\nValues in exiting automaticArrayInit:");

   for (i = 0; i <= 2; i++) {
      printf("array1[ %d ] = %d  \n", i, array2[ i ]);
   }

   puts("\nValues on exiting automaticArrayInit:");

   for (i = 0; i < 3; i++) {
      printf("array1[ %d ] = %d\n", i, array2[ i ] += 5);
   }
}
