#include <stdio.h>

void main() {
	//1바이트 0000 0000 (0) ~ 1111 1111 (255)
	//unsigned: 양수만
	
	unsigned char num1 = 1; // 0000 0001
	
	unsigned char num2 = 3; // 0000 0011

	printf("num1 & num2: %d\n", num1 & num2); // 0000 0001
	printf("num1 | num2: %d\n", num1 | num2); // 0000 0011
	printf("num1 ^ num2: %d\n", num1 ^ num2); // 0000 0010
	printf("~num1: %d\n", ~num1); // 1111 1110, 맨 앞의 숫자는 + - 결정
	
	printf("num1 << 3 : %d\n", num1 << 3); // 0000 1000 
	printf("num1 >> 3 : %d\n", num1 >> 3); // 0000 0000

	// 1011 1011 >> 3 : 0001 1011
	// 1011 1011 << 3 : 1101 1000
}