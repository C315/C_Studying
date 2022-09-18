#include <stdio.h>

void main() {
	int i;
	for (int i = 0; i < 3; i = i + 1) {
		printf("%d 최예지\n", i);
	}
	printf("%d for문 바깥 문장\n", i);
	//i는 for문 안쪽에서 선언되었으므로, for문 안쪽에서만 사용할 수 있음(지역변수)
}