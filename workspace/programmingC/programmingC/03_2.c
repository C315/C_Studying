#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//여러 개의 값을 띄어쓰기로 받는 방법
	int num;
	double d;
	char c;

	//scanf("%d", &num);
	//scanf("%lf", &d);
	//scanf(" %c", &c);

	scanf("%d%lf %c", &num, &d, &c); //%c 앞에는 같은 이유로 띄어쓰기 처리
	//띄어쓰기로 입력해도 되고 enter로 입력해도 됨

	printf("num:%d, d:%lf, c:%c", num, d, c);
}