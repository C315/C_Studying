#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//switch�� -> �ٸ� ���� �� �� ����: ���� ���
void main() {
	//1. �л� ���� ���(switch)��
	int num1;
	char grade;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num1);

	switch (num1/10) {
	case 10:
		//case 10������ case 9�� printf�� ��� --> �ڵ� ����
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'F';
	}
	//�ϰ�ó��
	printf("%c �����Դϴ�.\n", grade);

	//2. ����ڿ��� ���� �Է¹޾� ������ �� ���(2���� 28�Ϸ� ����, switch��)
	int month;
	int day
	printf("���� �Է��ϼ���: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	default:
		day = 30;
	}
	printf("%d���� ������ ���� %d�� �Դϴ�.", month, day);
}


