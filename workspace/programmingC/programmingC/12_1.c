#include <stdio.h>

//함수 정의는 main() 위에: 아래 있으면 오류 발생 -> 함수 선언 필요
//리턴타입 함수명() {
//
//}

void printName(char*, int); //함수 선언: 정의가 main() 앞이므로 생략 가능


//main()은 컴퓨터가 실행시키는 함수, 우리가 이를 정의하는 것

//함수 정의 
void printName(char* name, int cnt) { //문자열(이름)을 담아줄 name 변수: 문자열 선언 char name[10] or 포인터 char* name 
	for (int i = 0; i < cnt; i++) {
		printf("%s ", name);
	}
	printf("\n");
}
//name: 매개변수 parameter 인자 인수 argument  

void add(int a, int b) { //값을 return 하지 않기 때문에 void!
	printf("add 함수를 사용하여 구한 두 수의 합은 %d\n", a + b);
}

int add2(int a, int b) {
	return a + b; //return 있는 함수 -> 사용시 값으로 취급
}

void main() {
	printName("최예지", 3);
	printf("프로그램 개발 중...\n");
	printName("오석재", 5);
	printf("프로그램 개발 종료\n");

	add(3, 10); //함수 사용 결과가 값이 아니기에 나누기 불가능
	add2(4, 10) / 2; //함수 사용 결과가 int 값이기에 나누기 가능
	printf("add2 함수를 사용한 결과는 %d\n", add2(10, 20) / 2);
	int num = add2(7, 8); 
	printf("%d\n", num);
}