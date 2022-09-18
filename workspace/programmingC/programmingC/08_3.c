#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num = 0;
	printf("행의 갯수를 입력하세요: ");
	scanf("%d", &num);

	// *****
	// *****
	// *****
	// *****
	// *****
	for (int j = 0; j < num; j++) {
		for (int i = 0; i < num; i++) {
			printf("*"); //왜 '*'로 작성하면 안되지???
		}
		printf("\n");
	}
	printf("\n");

}