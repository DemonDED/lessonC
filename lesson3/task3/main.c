#include <stdio.h>

int main() {
	int counter, number;
	int result = 0;

	scanf("%d", &counter);
	while(counter > 0) {
		scanf("%d", &number);
		result += number;
		--counter;
	}
	
	printf("Result is %d\n", result);

	return 0;
}
