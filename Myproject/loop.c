#include <stdio.h>

int main(void) {

	// 반복문
	// for, while, do while

	//for (선언; 조건; 증감) 
	/*for (int i = 1; i <= 10; i++) {
		printf("Hello World %d\n", i);
	}*/

	// while (조건) { }
	/*int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i);
		i++;
	}*/

	// do {} while (조건);
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);

	return 0;
}