#include <stdio.h>
#include <math.h>

double round_to_integer(double number);

int main() {
	double number1, number2, number3;

	printf("%s", "Enter numbers for floor function: ");
	scanf("%lf%lf%lf", &number1, &number2, &number3);

	number1 = round_to_integer(number1);
	number2 = round_to_integer(number2);
	number3 = round_to_integer(number3);

	return 0;
}

double round_to_integer(double number) {
	printf("Start value - %.1f, result floor - %.1f\n", number, floor(number + .5));

	return floor(number + .5);
}

