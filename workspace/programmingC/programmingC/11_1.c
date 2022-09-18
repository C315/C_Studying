#define _CRT_SECURE_NO_WARNINGS//strcpy 쓰기 위해
#include <stdio.h>
#include <string.h> //문자열(배열)에 다른 값 대입 

void main() {
	char str[] = "korea";
	//str = "japan"; 불가능함: 배열이기 때문에 다른 값 대입할 수 없음
	strcpy(str, "japan"); //str[a]으로 지정해놓은 경우, a칸을 넘어서면 오류 발생

	//strcmp(문자열1, 문자열2); 문자열 1과 문자열 2가 서로 같으면 0, 다르면 1 or -1
	printf("%d\n",strcmp(str, "korea")); //문자열 1의 첫글자가 문자열 2보다 아스키코드 상 앞이면 -1
	printf("%d\n", strcmp(str, "japan"));
	printf("%d\n", strcmp(str, "apple")); //문자열 1의 첫글자가 문자열 2보다 아스키코드 상 뒤면 1

	printf("문자열의 길이: %d\n", strlen(str));

	int arr[] = { 1,2,3 };
	//arr = { 10,20,30 }; 불가능함: 배열이기 때문에!

	printf("%s\n", str);
	printf("%d\n", str);

	//문자열 입력받기
	char input[20]; //배열로 선언해줘야 입력 받을 수 있음 --> 칸수 지정
	scanf("%s", input); //배열은 주소이기 때문에 & 쓸 필요 없음
	printf("입력된 값: %s\n", input);

	//사용자에게 문자열을 입력받아 대문자를 소문자로, 소문자를 대문자로, 나머지는 그대로 출력
}