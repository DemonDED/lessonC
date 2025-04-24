#include <stdio.h>

int main() {
   float radius;
   puts("Enter radius pls");

   scanf("%f", &radius);
   
   printf("Diametr is %f\n", radius * 2);
   printf("Perimetr is %f\n", radius * 2 * 3.14159);
   printf("Ploshad is %f\n", radius * radius * 3.14159);

   return 0;
}
