#include <stdio.h>
#define Min 5 //매크로상수: 상수화 2 번째 방법

void main() {
	//상수화 const 
	const int num = 10; //다른 값으로 변경을 못하게 함!
	//num = 100;

	printf("%d\n", Min);


	int a = 10;
	int b = 20;

	int* const ptr = &a;
	//ptr = &b; 불가

	int arr[] = { 10,20,30 }; //arr은 10이 저장된 주소를 알고 있음: 포인터!
	//arr = &b; 배열은 포인터 상수! 주소가 바뀌면 10, 20, 30을 쓸 수 없으므로

	const int* ptr2 = &a;
	//*ptr2 = 5000; 상수포인터 속에 저장되어 있는 주소로 접근해서 값을 변경할 수 없음

	ptr2 = &b; //ptr2 속에 들어있는 값의 변경은 가능

	printf("%d\n", "hello"); //주소값을 보여줌

	printf("hello 문자열 주소: %d\n", "hello");
	printf("japan 문자열 주소: %d\n", "japan");

	char str1[] = "hello"; //문자열 = 배열 -> 포인터 역할을 함(주소를 알려줌)
	char* str2 = "hello"; //문자열 포인터 변수, 주소로 저장함 -> 다른 값으로 변경 불가
	printf("str1이 알고 있는 시작 주소: %d\n", str1);

	str1[0] = 'K';
	//str1 = "japan"; 배열은 포인터 상수이기 때문에 다른 주소를 대입할 수 없음
	
	//str2[0] = 'K'; //*str2 = 'K'; 포인터 변수 -> 값의 요소를 바꿔줄 수는 없음
	printf("str2에 저장된 주소(바꾸기 전): %d\n", str2);
	str2 = "japan"; //str2는 포인터이기 때문에 다른 주소로 변경 가능
	printf("str2에 저장된 주소(바꾼 후): %d\n", str2);

	printf("str1: %s, str2: %s\n", str1, str2);

	//문자열이 요소로 들어있는 배열
	//배열 안에 배열이 요소로 들어가 있는 배열(이차원배열)
	char str1[3][10] = { "apple", "japan", "korea" };
	char* str2 = { "apple", "japan", "korea" }; //포인터 배열

	//배열 포인터: 배열의 포인터(주소)를 저장해줌
	int(*arPtr)[3] = &str1; //3칸짜리 배열의 주소를 저장

	//char str[3][10] = {{'a','p','p','l','e'}, ...}
	printf("%s\n", str1[0]); //%s이므로 배열이 \0을 만날때까지 출력! --> 주소 출력X

	int intAr[3][2] = { {1,2},{10,20},{100,200} };

	printf("%d\n", intAr[0]); //{1,2} 배열의 시작 주소
	//이차원 배열의 첫번째 위치만 적으면 주소 출력
	printf("%d\n", intAr[0][1]);
}