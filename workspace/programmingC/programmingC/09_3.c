#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//while문: 반복의 조건 알 때
	int i = 0;
	while (i < 3) {
		printf("최예지\n");
		i++;
	}
	printf("while문 바깥 문장\n");

	//for문: 반복의 횟수 알 때
	for (int i = 0; i < 3; i++) {
		printf("최예지\n");
	}
	printf("for문 바깥 문장\n");

	//while문 예시
	int choice=0;
	while (1) {
		printf("1. 주문하기 2. 결제하기 3. 종료 >> ");
		scanf("%d", &choice);

		if (choice == 3) {
			break;
		}
	}

	while (choice !=3) { //선택지가 0이면 문제가 생김: choice 초기값이 이미 0이기 때문에 겹침
		printf("1. 주문하기 2. 결제하기 3. 종료 >> ");
		scanf("%d", &choice);
	}

	//do~while문: 최초 한 번은 실행됨
	do { 
		printf("1. 주문하기 2. 결제하기 3. 종료 >> ");
		scanf("%d", &choice);
	} while (choice!=0);
}