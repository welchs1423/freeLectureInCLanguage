#include <stdio.h>

int main(void) {
	//�迭
	//int subway_1 = 30;	// ����ö 1ȣ���� 30���� Ÿ�� �ִ�
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_1);
	//printf("����ö 2ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_2);
	//printf("����ö 3ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_3);

	// ���� ���� ������ �Բ�, ���ÿ� ����
	int subway_array[3]; // [0] [1] [2]
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", i+1, subway_array[i]);
	}

	return 0;
}