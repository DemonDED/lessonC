// Don't const pointer on don't const data

#include <stdio.h>
#include <ctype.h>

void convertToUpperCase(char *cPtr);

int main() {
	char string[] = "characters in $32.98";

	printf("The string before conversion is: %s\n", string);
	convertToUpperCase(string);
	printf("The string after conversion is: %s\n", string);

	return 0;
}

void convertToUpperCase(char *cPtr) {
	while(*cPtr != '\0') {
		
		if (islower(*cPtr)) {
			*cPtr = toupper(*cPtr);
		}

		++cPtr;
	}
}
