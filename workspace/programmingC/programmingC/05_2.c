#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("%d\n", -5 ? 10 : 100); //���ǿ� ���� �ٸ� ���� ����� ����

	//����ڿ��� ���̸� �Է� �޾Ƽ�, �����̸� �����Դϴ�, �ƴϸ� �̼������Դϴ� ���
	int age;
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);
	printf("%");

	printf("%s�Դϴ�.", age >= 20 ? "����" : "�̼�����"); //���ڿ��� %s
}