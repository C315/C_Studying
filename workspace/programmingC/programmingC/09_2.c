#include <stdio.h>

void main() {
	int a = 10;
	int b = 10;

	a++; //a=a+1
	++b; //b=b+1

	printf("a:%d b:%d\n", a, b);
	
	
	//a, b ����: �켱����
	printf("a:%d b:%d\n", a++, ++b);
	//1. a�� ��� �ִ� ���� b�� ��� �ִ� �� ��� <- 2������ ����
	//2. a++ <- 1������ ����
	//3. ++b <- 3������ ����(���� �켱������ ����)

	printf("a:%d b:%d\n", a, b);


	//������ �ǽ�
	int num1 = 50;
	int num2 = num1++ + 7; //57�� num2�� �־��ְ� num1�� 1�� ���ؼ� �־��� num1 51 num2 57

	printf("num1: % d num2 : % d\n", num1++, ++num2); //num1 51 num2 58, num1++���� �������� ����-> ��� �� num1 52

	num1 = --num2;
	printf("num1: % d num2 : % d\n", num1, num2); //num1 57 num2 57
	
}