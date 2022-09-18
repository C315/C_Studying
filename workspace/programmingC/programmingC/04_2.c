#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {
	//사용자에게 정수를 입력받아, 5로 나눈 몫과 나머지 계산
	int num1;
	printf("정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("5로 나눈 몫은 %d, 나머지는 %d입니다.\n", num1 / 5, num1 % 5);

	//사용자에게 두 자릿수 정수를 입력받아 십의자리와 일의자리 출력
	int num2;
	printf("두 자릿수 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("십의 자리는 %d, 일의 자리는 %d입니다.\n", num2 / 10, num2 % 10);

	//사용자에게 국어, 영어, 수학 점수를 띄어쓰기로 입력받아 평균을 소수점 아래 두 자리까지 출력
	int kor, eng, math;
	printf("국어, 영어, 수학 점수를 띄어쓰기로 입력하세요: ");
	scanf("%d%d%d", &kor, &eng, &math);
	printf("평균은 %.2lf점입니다.\n", (kor + eng + math) / 3.0); //복습!!!!!!

	//노래 한 곡당 300원인 코인노래방, 사용자에게 금액을 받아 부를 수 있는 곡 수와 잔돈을 출력
	int money;
	printf("금액을 지불하세요(원): ");
	scanf("%d", &money);
	printf("사용자께서 부를 수 있는 곡은 %d곡이고, 잔돈은 %d원입니다.", money / 300, money % 300);

}