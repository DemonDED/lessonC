#include <stdio.h>

int main() {
   puts("Программа будет вычислять произведение трех целых чисел");

   int x, y, z, result;

   puts("Введите 3 целых числа");
   scanf("%d%d%d", &x, &y, &z);

   result = x * y * z;

   printf("Результат умножения %d, %d и %d равен %d\n", x, y, z, result);
   
   return 0;

}
