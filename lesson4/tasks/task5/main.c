#include <stdio.h>
#include <math.h>

void round_to_integer(double number);
void round_to_tenths(double number);
void round_to_hundereths(double number);
void round_to_thousandths(double number);

int main() {
	double number;

	printf("%s", "Enter number for round work: ");
	scanf("%lf", &number);

	round_to_integer(number);
	round_to_tenths(number);
	round_to_hundereths(number);
	round_to_thousandths(number);

	return 0;
}

void round_to_integer(double number) {
	printf("Entered number - %.1f, to integer - %.1f\n", number, floor(number + .5));
}
void round_to_tenths(double number) {
	printf("To tenths - %.1f\n", floor((number * 10 + .5) / 10));
}
void round_to_hundereths(double number) {
	printf("To hundereths - %.2f\n", floor((number * 100 + .5) / 100));
}
void round_to_thousandths(double number) {
	printf("To thousandths - %.3f\n", floor((number * 1000 + 0.5) / 1000));
}
