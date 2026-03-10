#include <stdio.h>

// Создание и использование функции, определяемой программистом

int square( int y );

int main( void ) {
   int x;

   for ( x = 1; x <= 10; x++ ) {
      printf( "%d   ", square( x ) );
   }

   puts( "" );
}

int square( int y ) {

   return y * y;

}
