#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num = 0;
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	// *****
	// *****
	// *****
	// *****
	// *****
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < num; i++) {
			printf("*"); //�� '*'�� �ۼ��ϸ� �ȵ���???
		}
		printf("\n");
	}
	printf("\n");

}