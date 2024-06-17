#include <stdio.h> //Директива препроцессора С

int variant2(void) {
  printf("Welcome ");
  printf("to C!\n");
}
int variant3(void) {
  printf("Welcone\nto\nC!\n");
}
// Функция main начинает исполнение программы
int main(void) {
  printf("Welcome to C!\n");
  variant2();
  variant3();

  return 0;
}