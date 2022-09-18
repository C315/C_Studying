#include <stdio.h>

void main() {
	int a = 10;
	int b = 10;

	a++; //a=a+1
	++b; //b=b+1

	printf("a:%d b:%d\n", a, b);
	
	
	//a, b 차이: 우선순위
	printf("a:%d b:%d\n", a++, ++b);
	//1. a에 들어 있는 값과 b에 들어 있는 값 출력 <- 2번으로 실행
	//2. a++ <- 1번으로 실행
	//3. ++b <- 3번으로 실행(가장 우선순위가 낮음)

	printf("a:%d b:%d\n", a, b);


	//계산과정 실습
	int num1 = 50;
	int num2 = num1++ + 7; //57로 num2에 넣어주고 num1에 1을 더해서 넣어줌 num1 51 num2 57

	printf("num1: % d num2 : % d\n", num1++, ++num2); //num1 51 num2 58, num1++가장 마지막에 실행-> 출력 후 num1 52

	num1 = --num2;
	printf("num1: % d num2 : % d\n", num1, num2); //num1 57 num2 57
	
}