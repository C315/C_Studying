#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//2. �� ���� ���� ���̿� �ִ� ���ڸ� ���ʷ� ���
	int num1; int num2;
	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d%d", &num1, &num2);
	/*for (int i = num1; i <= num2; i++) {
		printf("%d ", i);
	}
	printf("\n");*/

	//�� ������ ���� ������ �Էµ��� �ʾ��� �� 
	if (num1 < num2) {
		for (int i = num1; i <= num2; i++) {
			printf("%d ", i);
		}
	}
	else {
		for (int i = num1; i >= num2; i--) { //ū ������ ���� �� ������
			printf("%d ", i);
		}
	}
	printf("\n");

	//3. ����ڿ��� ������ �Է¹޾� 1���� ����ڰ� �Է��� ���������� ������ ¦���� ���η� ���
	int num3;
	printf("¦���� ����� ������ �Ǵ� ������ �Է��ϼ���: ");
	scanf("%d", &num3);
	for (int i = 2; i <= num3; i += 2) {
		printf("%d ", i);
	}

	//����� ���� 1
	/*
	for (int i = 0; i <= num3; i++) {
		if (i % 2 != 0) {
			continue; //��� ���� �ݺ��� ������: for������ ���ư�
			//���⿡ ���̴� �ڵ�� ���� ������� �ʴ� �ڵ�: dead code
		}
		else {
			printf("%d ", i);
		}
	}*/

	//����� ����2
	/*for (int i = 1; i <= num3 / 2; i++) {
		printf("%d ", i * 2);
	}
	printf("\n");*/

	//4. ����ڿ��� ������ �Է¹޾� 1���� �ش� ���������� �հ� ���� ���� ���
	int num4; int sum = 0; int mul = 1;
	printf("�հ� ���� ����� ������ �Է��ϼ���: ");
	scanf("%d", &num4);
	for (int i = 1; i <= num4; i++) {
		sum += i;
		mul *= i;
	}
	printf("���� %d, ���� %d�Դϴ�.\n", sum, mul);
}