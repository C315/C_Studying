#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//while��: �ݺ��� ���� �� ��
	int i = 0;
	while (i < 3) {
		printf("�ֿ���\n");
		i++;
	}
	printf("while�� �ٱ� ����\n");

	//for��: �ݺ��� Ƚ�� �� ��
	for (int i = 0; i < 3; i++) {
		printf("�ֿ���\n");
	}
	printf("for�� �ٱ� ����\n");

	//while�� ����
	int choice=0;
	while (1) {
		printf("1. �ֹ��ϱ� 2. �����ϱ� 3. ���� >> ");
		scanf("%d", &choice);

		if (choice == 3) {
			break;
		}
	}

	while (choice !=3) { //�������� 0�̸� ������ ����: choice �ʱⰪ�� �̹� 0�̱� ������ ��ħ
		printf("1. �ֹ��ϱ� 2. �����ϱ� 3. ���� >> ");
		scanf("%d", &choice);
	}

	//do~while��: ���� �� ���� �����
	do { 
		printf("1. �ֹ��ϱ� 2. �����ϱ� 3. ���� >> ");
		scanf("%d", &choice);
	} while (choice!=0);
}