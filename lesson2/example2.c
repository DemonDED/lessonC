/* Формулирование алгоритмов методом нисходящего последовательного уточнения: 
пример 2 (повторение, управляемое контрольным значением) */

#include <stdio.h>

int main() {
   float average;
   int grade;
   unsigned int counter = 0;
   int grade_sum = 0;
   
   puts("Enter score on exam (enter -1 to end programm and get result)");   

   while(grade != -1) {
      printf("%s", "Enter score (-1 to end): ");
      scanf("%d", &grade);

      if (grade != -1) {
         grade_sum = grade_sum + grade;
         counter = counter + 1;
      }
   } 

   if (counter != 0) {
      average = (float)grade_sum / counter;
      
      printf("Numbers of students is %d, average is %.2f\n", counter, average);
      
      return 0;
   } else {
      puts("No grades, goodby");
      
      return 0;
   }

}
