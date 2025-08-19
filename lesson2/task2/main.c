#include <stdio.h>

int main() {
   int schet_number = 0;
   float start_balance = 0;
   float rashodi = 0;
   float credit = 0;
   float predel_credit = 0;
   float new_balance = 0;

   while (schet_number != -1) {
      printf("%s", "Введите номер счета (-1, если ввод закончен): ");
      scanf("%d", &schet_number);

      if (schet_number != -1) {
         printf("%s", "Введите начальный баланс: ");
         scanf("%f", &start_balance);

         printf("%s", "Введите общую сумму расходов: ");
         scanf("%f", &rashodi);

         printf("%s", "Введите общую сумму кредита: ");
         scanf("%f", &credit);

         printf("%s", "Введите предельный размер кредита: ");
         scanf("%f", &predel_credit);

         printf("Счет: %d\n", schet_number);
         printf("Предельный размер кредита: %.2f\n", predel_credit);
         new_balance = start_balance + rashodi - credit;
         printf("Баланс: %.2f\n", new_balance);

         if (predel_credit < new_balance) {
            puts("Предельный размер кредита превышен.");
         }
      }
   }   

   return 0;

}
