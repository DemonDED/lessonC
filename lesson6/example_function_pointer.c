#include <stdio.h>
#define SIZE 10

// Prototypes

void bubble(int work[], const int size, int (*compare) (int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main() {
	 int order;
	 int counter;

	 int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

	 printf("%s", "Enter 1 to sort ascending\nEnter 2 to sort descending: ");
	 scanf("%d", &order);

	 puts("\nData in items on original order");
	 for (counter = 0; counter < SIZE; counter++) {
		printf("a[%d] = %d\n", coutner, a[counter]);
	 }

	if (order == 1) {
		bubble(a, SIZE, ascending);
		puts("\nData in items on sorted order");
	} else if (order == 2) {
		bubble(a, SIZE descending);
		puts("\nData in itmes on sorted order");
	}

	for (counter = 0; counter < SIZE; counter++) {
		printf("a[%d] = %d\n", counter, a[counter]);
	}

	return 0;
}
