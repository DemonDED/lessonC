#include <stdio.h>

// Инициализзация массива в определении с помощью списка инициализации

int main() {
   int n[ 10 ] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
   int i;

   printf("%s%13s\n", "Element", "Value");

   for (i = 0; i < 10; i++) {
      printf("%7d%13d\n", i, n[ i ]);
   }

   return 0;
}
