#include <stdio.h>

int main(void) 
{
  float bensin = 0;
  float result = 0;
  unsigned int way = 0;
  unsigned int counter = 0;
  float counter_bens = 0;

  while (bensin != -1)
  {
    printf("Enter bensin (-1 to end) ");
    scanf("%f", &bensin);
    if (bensin == -1) {
      break;
    }
    printf("Enter way ");
    scanf("%d", &way);

    printf("Mile on gallon: %f\n", way / bensin);
    counter_bens += bensin;
    result += way;
    counter++;
  }
  if (result > 0) {
    printf("Srednee mile on gallon %f\n", result / counter_bens);
  }

  return 0;
}