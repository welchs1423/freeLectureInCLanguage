#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void) {
	//srand(time(NULL));	// ���� �ʱ�ȭ
	//int num = rand() % 3 + 1; // 1 ~ 3

	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("\n\n���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", rand() % 10);
	}
	return 0;
}