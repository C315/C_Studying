#include <stdio.h>

void main() {
	//논리연산자 사용 예시
	printf("참&&참: %d\n", -5 && 1); //0이 아닌 숫자는 모두 참, 0은 거짓
	printf("참&&거짓: %d\n", 1 && 0);
	printf("거짓&&거짓: % d\n", 0 && 0);

	printf("참||참: %d\n", -5 || 1); 
	printf("참||거짓: %d\n", 1 || 0);
	printf("거짓||거짓: % d\n", 0 || 0);

	printf("!참: %d\n", !15);
	printf("!거짓: %d\n", !0);
}