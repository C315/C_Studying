#include <stdio.h>

void main() {
	int num = 10;
	switch (num) {
	case 100:
		printf("100입니다\n");
	case 10:
		printf("10입니다\n");
	default:
		printf("그외의 값\n");
		//break; 생략가능: 있으나 없으나 똑같음
	}

}