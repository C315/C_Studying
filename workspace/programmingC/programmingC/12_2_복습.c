#include <stdio.h>

int global_variable = 100; //어떤 함수에서도 사용 가능

void change1(int a) { //a: change 함수 내부에 선언된 지역변수
	a = 5000; 
} 

int change2(int a) {
	a = 5000;
	return a;
}

void change3(int* ptr) { //주소를 넘겨 받아서 값을 변경해줌
	*ptr = 5000;
}

int main() {
	int num = 10;
	change3(&num); 
	printf("%d\n", num); 

	int a = 10; //지역변수

	change1(a); // = change(10): a는 값에 해당하기 때문
	printf("change1 이후 a에 저장된 값: %d\n", a); //change 함수가 끝나는 순간 a = 5000이었던 메모리 해제

	a = change2(a);
	printf("change2 이후 a에 저장된 값: %d\n", a);

	return 0; //int main()이기에 return 0 설정
	//함수가 오류가 발생한 경우 0이 반환되지 않기 때문에 오류 발생 여부 판단 가능
}