
//윤년이면 1 아니면 0 나오는 함수
int isLeap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0; //조건식 만족하면 1 나옴!
}