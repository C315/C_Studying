#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//1. ����ڿ��� ���� 5���� ����� �Է¹޾� ������� �迭�� ����
	int arr[5] = { 0 };

	/* �ۼ��� �ʾ� -> sizeof(arr)/sizeof(int) Ȱ��!
	for (int i = 0; i < 5; i++) {
		printf("%d��° ������ �Է��ϼ���: ", i+1);
		scanf("%d", &arr[i]);
	}*/

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d��° ������ �Է��ϼ���: ", i + 1); //�̰� ������ ����� �Է� ����
		scanf("%d", &arr[i]);
	}

	//2. ���� ����Ǿ� �ִ� ������ ������ ���� ���
	//{0, 0, 0, 0, 0}
	/* �ۼ��� �ʾ� -> if ���� �ۼ� ����!
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

	//3. �ش� �迭���� �ִ� ���
	int max = arr[0];
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		if (arr[i] >= max) {
			max = arr[i];
		}
	}
	printf("�ִ��� %d�Դϴ�.\n", max);

	//4. �ش� �迭���� �ּڰ� ���
}