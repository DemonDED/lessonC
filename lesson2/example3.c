// Формулирование алгоритмов методом нисходящего последовательного уточнения
// Вложенные управляющие структуры (пример 3)

#include <stdio.h>

int main() {
   int count_done = 0;
   int count_not_done = 0;
   int counter_students = 1;
   int result_exam = 0;

   while (counter_students <= 10) {
      printf("%s", "Enter result exam: ");
      scanf("%d", &result_exam);

      if (result_exam == 1) {
         count_done = count_done + 1;
      } else {
         count_not_done = count_not_done + 1;
      }
      
      counter_students = counter_students + 1;
   }

   printf("Done is %d\n", count_done);
   printf("Don't done is %d\n", count_not_done);
   
   if (count_done > 8) {
      puts("Premiruem!");
   }

   return 0;
}
