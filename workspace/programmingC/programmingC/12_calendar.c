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

	//1970년 1월 1일은 목요일
	//0:일 ~ 6:토


	//1970년부터 보고자하는 년도-1까지 총 며칠이 지났는지
	for (int currYear = 1970; currYear < year; currYear++) {
		isLeap(currYear);
	}

	return 0;
}