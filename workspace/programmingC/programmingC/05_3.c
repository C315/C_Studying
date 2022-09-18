#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//사용자에게 두 정수를 띄어쓰기로 입력받아서 
	//1) 둘 중 더 큰수 출력하기
	//2) 두 수의 차 출력하기
	int num1;
	int num2;

	printf("두 정수를 띄어쓰기로 입력하십시오: ");
	scanf("%d%d", &num1, &num2);

	printf("더 큰 수는 %d\n", num1 > num2 ? num1 : num2);
	printf("두 수의 차는 %d\n", num1 > num2 ? num1 - num2 : num2 - num1);

	//사용자에게 문자 하나를 입력받아서 대문자라면 소문자로, 소문자라면 대문자로 출력
	char c;
	printf("영어 문자 하나를 입력하십시오: ");
	scanf(" %c", &c);
	printf("대소문자 변환한 문자는 %c\n", c >= 97 ? c - 32 : c + 32);

	//응용) 대소문자가 아닌 다른 문자라면 그대로 출력
	char alphabet;
	printf("문자를 입력하십시오: ");
	scanf(" %c", &alphabet);

	char res = alphabet >= 65 && alphabet <= 90 ? alphabet + 32 : alphabet >= 97 && alphabet <= 122 ? alphabet - 32 : alphabet; 
	//삼합연산자 2번 -> 제어문 등장
	printf("%c를 출력합니다.\n", res);


	//사용자에게 나이를 입력받아서 나이가 10 이상 20 미만이라면 1000원, 그 외의 나이라면 무료 출력
	int age;
	printf("나이를 입력하십시오(세): ");
	scanf("%d", &age);
	printf("요금은 %s 입니다.\n", 10 <= age && age < 20 ? "1000원" : "무료"); //C언어는 파이썬과 달리 10<=age<20 불가

}