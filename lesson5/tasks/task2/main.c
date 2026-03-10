#include <stdio.h>
#define SIZE_ARR1 20
int enter_number_for_array(int array_int[], int entered_number);
void clear_stdin();


int main() {
	int array_int [SIZE_ARR1] = {0};
	int entered_number = 0;
	int counter = 20;

	while(counter > 0) {
		enter_number_for_array(array_int, entered_number);
		counter--;
	}

	return 0;
}

int enter_number_for_array(int array_int[], int entered_number) {
	if (scanf("%d", &entered_number) == 1) {
		// Array operations
		
		for (int i = 0; i <= SIZE_ARR1; i++) {
			if (array_int[i] != entered_number) {
				array_int[i] = entered_number;
			} else {
				puts("Dublicate number");
			}
		}

	} else {
		puts("Incorrect data!");
		clear_stdin();
		return 1;
	}

	clear_stdin();
	return entered_number;
}

void clear_stdin() {
	while(getchar() == '\n');
}
