#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;

int main(void) {
	int x = 5;

	printf("local x in outer scope of main is %d\n", x);
	
	{ // Начало новой области действия
		int x = 7;

		printf("local x in inner scope of main is %d\n", x);
	}	

	printf("local x in outer scope of main is %d\n", x);

	useLocal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();
	
	printf("\nlocal x in main is %d\n", x);
	
	return 0;
}

void useLocal(void) {
	int x = 25;

	printf("\nlocal x in useLocal is %d after entering useLocal", x);
	x++;
	printf("\nlocal x in useLocal %d before exiting useLocal\n", x);
}

void useStaticLocal(void) {
	static int x = 50;

	printf("\nstatic local x in useStaticLocal is %d after entering useStaticLocal", x);
	x++;
	printf("\nstatic local x in useStaticLocal %d before exiting useStaticLocal\n", x);
}

void useGlobal(void) {
	printf("\nglobal x in useGlobal is %d after entering useGlobal", x);
	x *= 10;
	printf("\nglobal x in useGlobal %d before exiting useGlobal\n", x);

}
