#include <stdio.h>

void main() {
	int num = 10;
	switch (num) {
	case 100:
		printf("100�Դϴ�\n");
	case 10:
		printf("10�Դϴ�\n");
	default:
		printf("�׿��� ��\n");
		//break; ��������: ������ ������ �Ȱ���
	}

}