#include <stdio.h>

int main(void) {
  int var = 7;

  switch (var)
  {
  case 1:
    var = 1;
    break;
  case 2:
    var = 2;
    break;
  case 3:
    var = 3;
    break;
  case 7:
    var = 7;
    break;
  default:
    var = 8;
    break;
  }

  return 0;
}
