#include <stdio.h>

void main() {
	//int, double, char
	int num = 97;
	double d = 3.14;
	char c = 'a';

	//타입이 섞여도 가능함
	printf("%d\n", num < 100);
	printf("%d\n", d != 3.14);
	printf("%d\n", c >= 'b');
}