#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//1 2 .. 10���� ����ϱ�
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}
	printf("\n");

	/* ������ �ڵ�
	for (int i = 0; i < 10; i++) {
		printf("%d ", i+1);
	}
	printf("\n");*/

	//1. ����ڿ��� * ���� ���� �Է¹޾� �� ���
	int cnt;
	printf("���� �� �� ����ұ��: ");
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		printf("*");
	}
	printf("\n");
}