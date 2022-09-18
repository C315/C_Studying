#define _CRT_SECURE_NO_WARNINGS //보안 경고 무시하기 위함
#include <stdio.h> //prinf() 함수 쓰기 위해서 작성

void main() {
	int num;
	printf("num의 주소: %d\n", &num); //정수 입력받기
	printf("정수입력: ");
	scanf("%d", &num); //원래는 보안 경고 발생 --> 오류 

	printf("num에 들어있는 값: %d\n", num);

	double pi;
	printf("실수입력: ");
	scanf("%lf", &pi);
	printf("pi에 들어있는 값: %lf\n", pi);

	char c;
	printf("문자입력: ");
	scanf(" %c", &c); //%c 앞에 띄어쓰기 해주거나 문자를 제일 처음으로 입력받으면 아래 각주의 문제 해결 가능
	printf("c에 들어가있는 값: %c\n", c); //enter 값(\n)을 문자로 인식해서 그냥 넘어감
}