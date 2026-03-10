// Don't const pointer on const data

#include <stdio.h>

void printCharacters(const char *sPtr);

int main() {
	char string[] = "print characters of a string";

	puts("The string is:");
	printCharacters(string);
	puts("");

	return 0;
}

void printCharacters(const char *sPtr) {
	for (;*sPtr != '\0';sPtr++) {
		printf("_%c_", *sPtr);
	}
}
