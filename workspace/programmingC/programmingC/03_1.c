#define _CRT_SECURE_NO_WARNINGS //���� ��� �����ϱ� ����
#include <stdio.h> //prinf() �Լ� ���� ���ؼ� �ۼ�

void main() {
	int num;
	printf("num�� �ּ�: %d\n", &num); //���� �Է¹ޱ�
	printf("�����Է�: ");
	scanf("%d", &num); //������ ���� ��� �߻� --> ���� 

	printf("num�� ����ִ� ��: %d\n", num);

	double pi;
	printf("�Ǽ��Է�: ");
	scanf("%lf", &pi);
	printf("pi�� ����ִ� ��: %lf\n", pi);

	char c;
	printf("�����Է�: ");
	scanf(" %c", &c); //%c �տ� ���� ���ְų� ���ڸ� ���� ó������ �Է¹����� �Ʒ� ������ ���� �ذ� ����
	printf("c�� ���ִ� ��: %c\n", c); //enter ��(\n)�� ���ڷ� �ν��ؼ� �׳� �Ѿ
}