#include <stdio.h>

void main() {
	for (int i = 0; i < 3; i++) {
		printf("for�� �� �� ����\n");
		for (int j = 0; j < 2; j++) {
			printf("���� for�� �� �� ����\n");
			printf("i:%d j:%d\n", i, j);
		}
		printf("for�� �� �� ���� 2\n");
	}
}