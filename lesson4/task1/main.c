#include <stdio.h>
#include <math.h>

double hypotenuse(double cat1, double cat2);

int main(void) {
	double cat1, cat2;	

	printf("%s", "Enter two numbers: ");
	scanf("%lf%lf", &cat1, &cat2);

	printf("Result is : %.1f\n", hypotenuse(cat1, cat2));

	return 0;
}

double hypotenuse(double cat1, double cat2) {
	double hypot;

	hypot = sqrt(pow(cat1, 2) + pow(cat2, 2));
	
	return hypot;
}
