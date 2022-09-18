#include <stdio.h>

void main() {
	int num = 10;

	printf("num의 주소값: %d\n", &num);
	int* ptr = &num; //int 값을 저장하고 있는 변수의 주소만 저장 가능!

	printf("ptr속에 들어 있는 값: %d\n", ptr); //num의 주소를 저장하고 있는 변수 ptr도 주소가 있음! 
	printf("ptr변수의 주소: %d\n", &ptr);
	printf("ptr속의 주소값에 들어있는 값: %d\n", *ptr); //주소 속 값

	*ptr = 100;

	printf("num속에 들어있는 값:%d\n", num);
}