#include <stdio.h>

//�Լ� ���Ǵ� main() ����: �Ʒ� ������ ���� �߻� -> �Լ� ���� �ʿ�
//����Ÿ�� �Լ���() {
//
//}

void printName(char*, int); //�Լ� ����: ���ǰ� main() ���̹Ƿ� ���� ����


//main()�� ��ǻ�Ͱ� �����Ű�� �Լ�, �츮�� �̸� �����ϴ� ��

//�Լ� ���� 
void printName(char* name, int cnt) { //���ڿ�(�̸�)�� ����� name ����: ���ڿ� ���� char name[10] or ������ char* name 
	for (int i = 0; i < cnt; i++) {
		printf("%s ", name);
	}
	printf("\n");
}
//name: �Ű����� parameter ���� �μ� argument  

void add(int a, int b) { //���� return ���� �ʱ� ������ void!
	printf("add �Լ��� ����Ͽ� ���� �� ���� ���� %d\n", a + b);
}

int add2(int a, int b) {
	return a + b; //return �ִ� �Լ� -> ���� ������ ���
}

void main() {
	printName("�ֿ���", 3);
	printf("���α׷� ���� ��...\n");
	printName("������", 5);
	printf("���α׷� ���� ����\n");

	add(3, 10); //�Լ� ��� ����� ���� �ƴϱ⿡ ������ �Ұ���
	add2(4, 10) / 2; //�Լ� ��� ����� int ���̱⿡ ������ ����
	printf("add2 �Լ��� ����� ����� %d\n", add2(10, 20) / 2);
	int num = add2(7, 8); 
	printf("%d\n", num);
}