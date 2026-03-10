#include <stdio.h>

float calculate_charges(float time);

int main(void) {
	float time_1, time_2, time_3;
	float price_1, price_2, price_3;	

	printf("%s", "Введите вермя парковки: ");
	scanf("%f%f%f", &time_1, &time_2, &time_3);

	price_1 = calculate_charges(time_1);
	price_2 = calculate_charges(time_2);
	price_3 = calculate_charges(time_3);

	printf("%s   %s    %s\n", "Car", "Hours", "Charge");
	printf("1%10.1f%10.2f\n", time_1, price_1);	
	printf("2%10.1f%10.2f\n", time_2, price_2);
	printf("3%10.1f%10.2f\n", time_3, price_3);
	
	return 0;
}

float calculate_charges(float time) {
	float price_sum = 2;

	if (time > 3) {
		for (float i = 0; i < time - 3; i += 1) {
			price_sum += 0.5;
			if (price_sum == 10) {
				break;
			}
		}
	}

	return price_sum;
}
