#include <stdio.h>

void main() {
	printf("%d\n", 10 + 2);
	printf("%lf\n", 'a' + 3.5);

	printf("%lf\n", 5 * 0.0);
	printf("%d\n", 'a' - 'b');

	printf("%d\n", 10 / 3); //������� �Ҽ����� int/int = int�� �����Ƿ� %d�̿� --> �� ��� (�ݿø�X)
	printf("%lf\n", 10 / 3.0);

	// 10/0�� ���������� ���ǵ��� �����Ƿ� ���� �߻�

	printf("%d\n", 10 % 3); //������ ���
}