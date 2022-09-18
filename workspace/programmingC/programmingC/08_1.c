#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//2. 두 개의 정수 사이에 있는 숫자를 차례로 출력
	int num1; int num2;
	printf("두 개의 정수를 입력하세요: ");
	scanf("%d%d", &num1, &num2);
	/*for (int i = num1; i <= num2; i++) {
		printf("%d ", i);
	}
	printf("\n");*/

	//두 정수가 작은 순서로 입력되지 않았을 때 
	if (num1 < num2) {
		for (int i = num1; i <= num2; i++) {
			printf("%d ", i);
		}
	}
	else {
		for (int i = num1; i >= num2; i--) { //큰 수부터 작은 수 순서로
			printf("%d ", i);
		}
	}
	printf("\n");

	//3. 사용자에게 정수를 입력받아 1부터 사용자가 입력한 정수까지의 숫자중 짝수만 가로로 출력
	int num3;
	printf("짝수만 출력할 기준이 되는 정수를 입력하세요: ");
	scanf("%d", &num3);
	for (int i = 2; i <= num3; i += 2) {
		printf("%d ", i);
	}

	//강사님 예시 1
	/*
	for (int i = 0; i <= num3; i++) {
		if (i % 2 != 0) {
			continue; //즉시 다음 반복을 실행함: for문으로 돌아감
			//여기에 쓰이는 코드는 절대 실행되지 않는 코드: dead code
		}
		else {
			printf("%d ", i);
		}
	}*/

	//강사님 예시2
	/*for (int i = 1; i <= num3 / 2; i++) {
		printf("%d ", i * 2);
	}
	printf("\n");*/

	//4. 사용자에게 정수를 입력받아 1부터 해당 정수까지의 합과 곱을 각각 출력
	int num4; int sum = 0; int mul = 1;
	printf("합과 곱을 출력할 정수를 입력하세요: ");
	scanf("%d", &num4);
	for (int i = 1; i <= num4; i++) {
		sum += i;
		mul *= i;
	}
	printf("합은 %d, 곱은 %d입니다.\n", sum, mul);
}