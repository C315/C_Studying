#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//����ڿ��� ������ �Է¹޾� ¦��/Ȧ���Դϴ� ���
	//if-else��
	int num;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}

	//���׿�����
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	printf("%s�Դϴ�.\n", num % 2 == 0 ? "¦��" : "Ȧ��");

}