#include <stdio.h>

void main() {
	int num; //선언
	num = 10;

	//변수에 들어있는 값을 사용하기 위해서 적어도 한 번은 초기화(변수를 선언하고 값을 대입) 해야 함
	printf("변수에 들어있는 값: %d\n", num);

	//변수를 같은 이름으로 여러 개 선언하면 오류 생김


	double pi = 3.14; //변수의 선언과 초기화 동시에 가능
	printf("원주율은 %.2lf입니다\n", pi);
}