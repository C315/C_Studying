#include <stdio.h>

void main() {
	printf("%d\n", 10 + 2);
	printf("%lf\n", 'a' + 3.5);

	printf("%lf\n", 5 * 0.0);
	printf("%d\n", 'a' - 'b');

	printf("%d\n", 10 / 3); //결과값이 소수여도 int/int = int로 나오므로 %d이용 --> 몫만 출력 (반올림X)
	printf("%lf\n", 10 / 3.0);

	// 10/0은 수학적으로 정의되지 않으므로 오류 발생

	printf("%d\n", 10 % 3); //나머지 계산
}