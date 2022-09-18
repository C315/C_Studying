#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//사용자에게 정수를 입력받아 짝수/홀수입니다 출력
	//if-else문
	int num;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}

	//삼항연산자
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	printf("%s입니다.\n", num % 2 == 0 ? "짝수" : "홀수");

}