#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "12_calendarFunction.h"


int main() {
	printf("input yyyy mm: ");
	int year, month;
	scanf("%d%d", &year, &month);

	printf("\n%14s%d-%02d\n\n", "", year, month);

	char* dayNames[]  = {"Sun", "Mon","Tue","Wed","Thu","Fri","Sat"};
	for (int i = 0; i < 7; i++) {
		printf("%5s", dayNames[i]);
	}
	printf("\n");

	//1970�� 1�� 1���� �����
	//0:�� ~ 6:��


	//1970����� �������ϴ� �⵵-1���� �� ��ĥ�� ��������
	for (int currYear = 1970; currYear < year; currYear++) {
		isLeap(currYear);
	}

	return 0;
}