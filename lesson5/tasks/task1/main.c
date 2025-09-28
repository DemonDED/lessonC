#include <stdio.h>
#define SIZE 9

void calc_by_gross_sales(unsigned int array[], float payment);

int main(void) {
	unsigned int counter_array[SIZE] = {0};
	char text_array[9][10] = {"$201-$299", "$300-$399", "$400-$499", "$500-$599", "$600-$699", "$700-$799", "$800-$899", "$900-$999", "$1000-..."};
	int payment;	
	
	printf("%s", "Введите сумму заработка сотрудника (для завершения введите -1): ");
	scanf("%d", &payment);
	calc_by_gross_sales(counter_array, payment);

	while (payment != -1) {	
		printf("%s", "Введите сумму заработка сотрудника (для завершения введите -1): ");
		scanf("%d", &payment);
		if (payment != -1) {
			calc_by_gross_sales(counter_array, payment);
		}
	}
	
	for (int i = 0; i < SIZE; i++) {
		printf("%d. %s    %d\n", i, text_array[i], counter_array[i]);
	}
	
	return 0;
}

void calc_by_gross_sales(unsigned int array[], float payment) {
	int sum = payment - (payment * 0.9) + 200;
	
	if (sum > 200 && sum < 300) {
		array[0]++;
	} else if (sum > 299 && sum < 400) {
		array[1]++;
	} else if (sum > 399 && sum < 500) {
		array[2]++;
	} else if (sum > 499 && sum < 600) {
		array[3]++;
	} else if (sum > 599 && sum < 700) {
		array[4]++;
	} else if (sum > 699 && sum < 800) {
		array[5]++;
	} else if (sum > 799 && sum < 900) {
		array[6]++;
	} else if (sum > 899 && sum < 1000) {
		array[7]++;
	} else if (sum >= 1000) {
		array[8]++;
	}
}
