#include <stdio.h>

int main(void)
{
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("정수 3개를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값 : %d\n", one);
	printf("두 번째 값 : %d\n", two);
	printf("세 번째 값 : %d\n", three);*/

	// 문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/

	char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);

	return 0;
}