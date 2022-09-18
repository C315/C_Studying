#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//1. 사용자에게 정수 5개를 띄어쓰기로 입력받아 순서대로 배열에 저장
	int arr[5] = { 0 };

	/* 작성자 초안 -> sizeof(arr)/sizeof(int) 활용!
	for (int i = 0; i < 5; i++) {
		printf("%d번째 정수를 입력하세요: ", i+1);
		scanf("%d", &arr[i]);
	}*/

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d번째 정수를 입력하세요: ", i + 1); //이거 없으면 띄어쓰기로 입력 받음
		scanf("%d", &arr[i]);
	}

	//2. 이후 저장되어 있는 값들을 다음과 같이 출력
	//{0, 0, 0, 0, 0}
	/* 작성자 초안 -> if 통해 작성 가능!
	printf("{");
	for (int i = 0; i < 4; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d}\n", arr[4]);*/

	printf("{");
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		if (i == sizeof(arr) / sizeof(int) - 1) {
			printf("%d", arr[i]);
		}
		else {
			printf("%d, ", arr[i]);
		}
	}

	//3. 해당 배열에서 최댓값 출력
	int max = arr[0];
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		if (arr[i] >= max) {
			max = arr[i];
		}
	}
	printf("최댓값은 %d입니다.\n", max);

	//4. 해당 배열에서 최솟값 출력
}