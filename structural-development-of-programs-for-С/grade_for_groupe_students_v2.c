#include <stdio.h>

int main(void) {
  int grade;
  int total = 0;
  unsigned int counter = 0;

  total = 0;
  printf("Enter a grade, to end enter -1: ");
  scanf("%d", &grade);

  while(grade != -1) {
    total = total + grade;
    counter++;
    printf("Enter a grade: ");
    scanf("%d", &grade);
  }

  if (counter != 0) {
    float average = (float) total / counter;
    printf("Class average is %.2f\n", average);
  } 
  else {
    printf("Average is null\n");
  }
  
  return 0;
}