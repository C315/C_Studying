#include <stdio.h>

void main() {
	//배열의 크기는 처음 지정하였을 때 고정됨 --> 변하지 않음
	int arr[3] = { 10,85,90 };
	printf("arr 주소: %d\n", arr);
	printf("arr 옆의 주소: %d\n", arr + 1);
	
	//*주소 -> 주소 속 값 출력
	printf("arr 속 값: %d\n", *arr); // =arr[0]
	printf("arr 옆 주소 속 값: %d\n", *(arr + 1)); // =arr[1]

	// *(arr+1) = arr[1]
	printf("arr 옆 주소 속 값: %d\n", arr[1]); //인덱스 번호(0부터 시작)'

	//메모리상에서 차지하는 크기 알려주는 연산자: sizeof
	printf("arr 전체 크기(byte): %d\n", sizeof(arr));

	//요소의 갯수
	printf("arr 요소 갯수: %d\n", sizeof(arr) / sizeof(int)); // 전체크기 / 요소 1개의 크기

	//인덱스 범위 초과: arr[3] --> 오류가 나진 않고, 사용하지 않는 그 속 값 출력
	//할당 받지 않은 메모리 공간 속 값을 사용하게 되므로 오류 발생할 수 있음
	printf("인덱스 범위 초과 arr[3]: %d\n", arr[3]);

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("arr의 %d번째 방에 있는 요소: %d\n", i, arr[i]);
	}

	int arr2[3]; //3칸 짜리 array 선언: 선언만 하면 이전에 사용하고 남은 쓰레기 값들이 들어가 있음
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++) {
		printf("arr2의 %d번째 방에 존재하는 요소: %d\n", i, arr2[i]); //배열을 할당해주었으나, 쓰레기 값들이 들어가 있음
	}

	int arr3[10] = { 0 }; //arr3 배열은 10칸의 공간 할당, 모두 0을 값으로 들어가게 됨
	int arr4[10] = { 0, }; //arr3와 같음

	arr4[4] = 100; //대입
}