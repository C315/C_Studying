#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//���� ���� ���� ����� �޴� ���
	int num;
	double d;
	char c;

	//scanf("%d", &num);
	//scanf("%lf", &d);
	//scanf(" %c", &c);

	scanf("%d%lf %c", &num, &d, &c); //%c �տ��� ���� ������ ���� ó��
	//����� �Է��ص� �ǰ� enter�� �Է��ص� ��

	printf("num:%d, d:%lf, c:%c", num, d, c);
}