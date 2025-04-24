// Формулирование алгоритмов: пример 1 (повторение, управляемое счетчиком)

#include <stdio.h>

int main() {
   int count_students = 0;
   int exam_score = 0;
   int sum_score = 0;  

   while(count_students < 10) {
      printf("%s", "Enter exam scores: ");
      scanf("%d", &exam_score);
      
      sum_score = sum_score + exam_score;
      count_students = count_students + 1;
   }
   
   printf("Average score for group: %d\n", sum_score / 10);

   return 0;
}
