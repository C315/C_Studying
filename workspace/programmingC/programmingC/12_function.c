
//�����̸� 1 �ƴϸ� 0 ������ �Լ�
int isLeap(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0; //���ǽ� �����ϸ� 1 ����!
}