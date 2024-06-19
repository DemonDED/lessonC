#include <stdio.h>

int main(void) {
  int sum;
  int x;

  x = 1;
  sum = 0;

  sum += x;
  printf("sum is %d\n", sum);

  while (x < 11) {
    sum += ++x;
    printf("x is %d\n", x);
    printf("sum is %d\n", sum);
  }

  return 0;
}