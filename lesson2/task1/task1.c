#include <stdio.h>

int main() {
   float oil = 0;
   int way = 0;
   float srednee = 0;
   float result = 0;
   int counter = 0;
   

   while (oil != -1) {
      printf("%s", "Введите расход бензина (-1, если ввод закончен): ");
      scanf("%f", &oil);
      
      if (oil != -1) {
         printf("%s", "Введите пройденный путь: ");
         scanf("%d", &way);

         srednee = (float) way / oil;
         printf("Для этой заправки получено миль/галлон %.6f\n\n", srednee);
         
         result += srednee;
         ++counter;
      } else if (oil == -1) {
         puts("Входных данных не поступило.\n");
         return 0;
      }
   }

   printf("Среднее число миль/галлон %.6f\n", (float) result / counter);

   return 0;
}
