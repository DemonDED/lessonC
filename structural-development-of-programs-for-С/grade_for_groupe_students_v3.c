#include <stdio.h>

int main(void) {
  int grade = 0;
  unsigned int counter = 1;
  unsigned int counter_done = 0;
  unsigned int counter_undone = 0;

  while (counter <= 10)  {
    printf("Enter result: (1=done, 2=undone) ");
    scanf("%d", &grade);
    if (grade == 1) {
      counter_done++;
      counter++;
    }
    else if(grade == 2) {
      counter_undone++;
      counter++;
    }
    else {
      puts("Please, enter corretc value! 1 or 2");
    }
  }

  printf("Done is %d\n", counter_done);
  printf("Undone is %d\n", counter_undone);

  if (counter_done > 8) {
    puts("Prize!");
  }
  
  return 0;
}