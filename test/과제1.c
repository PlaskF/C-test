#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title 정수 하나 입력받아 10진수, 16진수로 출력");

	int num;
	printf("정수를 입력하시오 :");
	scanf_s("%d", &num);
	printf("입력한 정수는 \"%d\"입니다\n", num);
	printf("10진수:%d\n", num);
	printf("16진수:%x\n", num);
	return 0;
}