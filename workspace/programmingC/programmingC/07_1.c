#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//switch문 -> 다른 언어에서 본 적 없음: 복습 요망
void main() {
	//1. 학생 성적 출력(switch)문
	int num1;
	char grade;
	printf("성적을 입력하세요: ");
	scanf("%d", &num1);

	switch (num1/10) {
	case 10:
		//case 10에서도 case 9의 printf문 출력 --> 코드 줄임
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	default:
		grade = 'F';
	}
	//일괄처리
	printf("%c 학점입니다.\n", grade);

	//2. 사용자에게 월을 입력받아 마지막 일 출력(2월은 28일로 가정, switch문)
	int month;
	int day
	printf("월을 입력하세요: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 2:
		day = 28;
		break;
	default:
		day = 30;
	}
	printf("%d월의 마지막 날은 %d일 입니다.", month, day);
}


