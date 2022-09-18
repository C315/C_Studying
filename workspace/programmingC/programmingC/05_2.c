#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("%d\n", -5 ? 10 : 100); //조건에 따라 다른 값을 결과로 가짐

	//사용자에게 나이를 입력 받아서, 성인이면 성인입니다, 아니면 미성년자입니다 출력
	int age;
	printf("나이를 입력하세요: ");
	scanf("%d", &age);
	printf("%");

	printf("%s입니다.", age >= 20 ? "성인" : "미성년자"); //문자열은 %s
}