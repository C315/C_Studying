#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//1 2 .. 10까지 출력하기
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
	}
	printf("\n");

	/* 동일한 코드
	for (int i = 0; i < 10; i++) {
		printf("%d ", i+1);
	}
	printf("\n");*/

	//1. 사용자에게 * 별의 개수 입력받아 별 출력
	int cnt;
	printf("별을 몇 개 출력할까요: ");
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		printf("*");
	}
	printf("\n");
}