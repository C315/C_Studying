#include <stdio.h>

void main() {
	for (int i = 0; i < 3; i++) {
		printf("for문 안 쪽 문장\n");
		for (int j = 0; j < 2; j++) {
			printf("이중 for문 안 쪽 문장\n");
			printf("i:%d j:%d\n", i, j);
		}
		printf("for문 안 쪽 문장 2\n");
	}
}