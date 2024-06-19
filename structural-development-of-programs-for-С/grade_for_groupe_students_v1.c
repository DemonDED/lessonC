#include <stdio.h>

int main(void) {
  int sum_grade = 0;
  int counter_grade = 1;

  while (counter_grade <= 10) {
    int grade;
    printf("Enter grade student: ");
    scanf("%d", &grade);
    sum_grade = sum_grade + grade;
    counter_grade++;
  }

  printf("Class average is: %d\n", sum_grade / 10);
  
  return 0;
}