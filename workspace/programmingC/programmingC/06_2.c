#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//90점 이상 A, 80점 이상 B, 70점 이상 C, 70점 미만 F
	//학생에게 성적(int)를 입력받아 성적에 알맞게 출력
	int score;
	printf("점수를 입력하세요: ");
	scanf("%d", &score);
	printf("학점은 ");
	if (score >= 90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else {
		printf("F");
	}
	printf("입니다.\n");

	//사용자에게 년을 입력받아 윤년(2월이 29일인 해)/평년 출력
	//윤년: 4, 100, 400의 배수O or 4의 배수O, 100, 400의 배수X
	int year;
	printf("년도를 입력하세요: ");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0) {
			printf("윤년입니다.\n");
		}
		else if (year % 100 != 0 && year % 400 != 0) {
			printf("윤년입니다.\n");
			}
	}
	printf("평년입니다.\n");

	//강사 해답 1
	/*if (year % 400 == 0) {
		printf("윤년입니다.\n");
	}
	else if (year % 100 == 0) {
		printf("평년입니다.\n");
	}
	else if (year % 4 == 0) {
		printf("윤년입니다.\n");
	}
	else {
		printf("평년입니다.\n")
	}*/

	//강사 해답 2
	/*if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { 
		printf("윤년\n");
	}
	else {
		printf("평년\n")
	}*/
	
}