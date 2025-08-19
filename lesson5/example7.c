#include <stdio.h>

int main() {
   char string1[ 20 ];
   char string2[] = "string literal";
   int i;

   printf("Enter a string ");
   scanf("%s", string1);

   printf("string is: %s\nstring2 is: %s\nstring1 with space between characters is: \n", string1, string2);

   for (i = 0; string1[ i ] != '\0'; i++) {
      printf("%c ", string1[ i ]);
   } 

   return 0;
}
