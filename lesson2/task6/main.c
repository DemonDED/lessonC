#include <stdio.h>

int main() {
	float principal, rate, interest;	
	int days;
	float contr = 0;
	
	printf("%s", "Enter principal (-1 to end enter): ");
	if (scanf("%f", &principal) == 1) {
		contr = principal;
		while(contr != -1) {
			printf("%s", "Enter rate: ");
			if (scanf("%f", &rate) == 1) {
				printf("%s", "Enter days: ");
				if (scanf("%d", &days) == 1) {
					interest = principal * rate * days / 365;
					printf("Interest is $%.2f\n", interest);
				} else {
					puts("Incorrect data!");
				}
			} else {
				puts("Incorrect data!");
			}
			
			printf("%s", "Enter principal (-1 to end enter): ");
			if (scanf("%f", &principal) == 1) {
				contr = principal;
			} else {
				puts("Incorrect data!");
			}
		}
	} else {
		puts("Incorrect data!");
	}

	return 0;
}
