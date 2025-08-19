#include <stdio.h>
#include <math.h>

int main() {
	int sum = 0;
	int count = 0;
	float number = 333.546372;
	int x;	

	for (count = 1; count < 100; count++) {
		sum += count;
	}
	printf("Sum is %d\n", sum);

	printf("%-15.1f\n%-15.2f\n%-15.3f\n%-15.4f\n%-15.5f\n", number, number, number, number, number);
	
	printf("%10.2f\n", pow(2.5, 3));

	x = 1;
	while(x <= 20) {
		if (x % 5 != 0) {
			printf("%d", x);
		} else {
			puts("");
		}
		++x;
	}

	for (x = 1; x <= 20; x++) {
		if (x % 5 != 0) {
			printf("%d", x);
		} else {
			puts("");
		}
	}

	return 0;
}
