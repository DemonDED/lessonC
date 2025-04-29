#include <stdio.h>

int main() {
   float prodahi = 0;
   float zarplata = 0;

   while (prodahi != -1) {
      printf("%s", "Введите сумму продаж в долларах (-1, если ввод закончен): ");
      scanf("%f", &prodahi);

      if (prodahi > 0) {
         zarplata = 200 + prodahi * 0.09;
         printf("Зарплата: $%.2f\n", zarplata);
      } else {
         puts("Данные не были введены. Конец программы.");
         return 0;
      }
   }

}
