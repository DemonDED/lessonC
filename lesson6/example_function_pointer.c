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

void bubble(int work[], const int size, in (*compare) (int a, int b)) {
	int pass;
	int count;

	void swap(int *element1Ptr, int *element2Ptr);

	for (pass = 1; pass < size - 1; pass++) {
		for (count = 0; count < size; count++) {
			if ( (*compare) (work[count], work[count + 1]) ) {
				swap(&work[count], &work[count + 1]);
			}
		}
	}
}

void swap(int *element1Ptr, int *element2Ptr) {
	int hold;

	hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

int ascending(int a, int b) {
	return b < a;
}

int descending(int a, int b) {
	return b > a;
}
