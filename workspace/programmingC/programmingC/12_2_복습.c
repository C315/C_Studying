#include <stdio.h>

int global_variable = 100; //� �Լ������� ��� ����

void change1(int a) { //a: change �Լ� ���ο� ����� ��������
	a = 5000; 
} 

int change2(int a) {
	a = 5000;
	return a;
}

void change3(int* ptr) { //�ּҸ� �Ѱ� �޾Ƽ� ���� ��������
	*ptr = 5000;
}

int main() {
	int num = 10;
	change3(&num); 
	printf("%d\n", num); 

	int a = 10; //��������

	change1(a); // = change(10): a�� ���� �ش��ϱ� ����
	printf("change1 ���� a�� ����� ��: %d\n", a); //change �Լ��� ������ ���� a = 5000�̾��� �޸� ����

	a = change2(a);
	printf("change2 ���� a�� ����� ��: %d\n", a);

	return 0; //int main()�̱⿡ return 0 ����
	//�Լ��� ������ �߻��� ��� 0�� ��ȯ���� �ʱ� ������ ���� �߻� ���� �Ǵ� ����
}