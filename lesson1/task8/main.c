#include <stdio.h>

int main() {
	int num1, num2, num3, num4, num5;

	scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
	if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
		printf("%d", num1);	
	}

	if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
		printf("%d", num2);	
	}

	if (num3 > num1 && num3 > num2 && num3 > num4 && num2 > num5) {
		printf("%d", num3);	
	}

	if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5) {
		printf("%d", num4);	
	}

	if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) {
		printf("%d", num5);	
	}


	return 0;
}
