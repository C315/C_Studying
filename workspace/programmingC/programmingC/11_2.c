#include <stdio.h>

void main() {
	int num = 10;

	printf("num�� �ּҰ�: %d\n", &num);
	int* ptr = &num; //int ���� �����ϰ� �ִ� ������ �ּҸ� ���� ����!

	printf("ptr�ӿ� ��� �ִ� ��: %d\n", ptr); //num�� �ּҸ� �����ϰ� �ִ� ���� ptr�� �ּҰ� ����! 
	printf("ptr������ �ּ�: %d\n", &ptr);
	printf("ptr���� �ּҰ��� ����ִ� ��: %d\n", *ptr); //�ּ� �� ��

	*ptr = 100;

	printf("num�ӿ� ����ִ� ��:%d\n", num);
}