#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//90�� �̻� A, 80�� �̻� B, 70�� �̻� C, 70�� �̸� F
	//�л����� ����(int)�� �Է¹޾� ������ �˸°� ���
	int score;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);
	printf("������ ");
	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else {
		printf("F");
	}
	printf("�Դϴ�.\n");

	//����ڿ��� ���� �Է¹޾� ����(2���� 29���� ��)/��� ���
	//����: 4, 100, 400�� ���O or 4�� ���O, 100, 400�� ���X
	int year;
	printf("�⵵�� �Է��ϼ���: ");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0) {
			printf("�����Դϴ�.\n");
		}
		else if (year % 100 != 0 && year % 400 != 0) {
			printf("�����Դϴ�.\n");
			}
	}
	printf("����Դϴ�.\n");

	//���� �ش� 1
	/*if (year % 400 == 0) {
		printf("�����Դϴ�.\n");
	}
	else if (year % 100 == 0) {
		printf("����Դϴ�.\n");
	}
	else if (year % 4 == 0) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("����Դϴ�.\n")
	}*/

	//���� �ش� 2
	/*if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { 
		printf("����\n");
	}
	else {
		printf("���\n")
	}*/
	
}