#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("title ���� �ϳ� �Է¹޾� 10����, 16������ ���");

	int num;
	printf("������ �Է��Ͻÿ� :");
	scanf_s("%d", &num);
	printf("�Է��� ������ \"%d\"�Դϴ�\n", num);
	printf("10����:%d\n", num);
	printf("16����:%x\n", num);
	return 0;
}