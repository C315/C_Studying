#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	//����ڿ��� �� ������ ����� �Է¹޾Ƽ� 
	//1) �� �� �� ū�� ����ϱ�
	//2) �� ���� �� ����ϱ�
	int num1;
	int num2;

	printf("�� ������ ����� �Է��Ͻʽÿ�: ");
	scanf("%d%d", &num1, &num2);

	printf("�� ū ���� %d\n", num1 > num2 ? num1 : num2);
	printf("�� ���� ���� %d\n", num1 > num2 ? num1 - num2 : num2 - num1);

	//����ڿ��� ���� �ϳ��� �Է¹޾Ƽ� �빮�ڶ�� �ҹ��ڷ�, �ҹ��ڶ�� �빮�ڷ� ���
	char c;
	printf("���� ���� �ϳ��� �Է��Ͻʽÿ�: ");
	scanf(" %c", &c);
	printf("��ҹ��� ��ȯ�� ���ڴ� %c\n", c >= 97 ? c - 32 : c + 32);

	//����) ��ҹ��ڰ� �ƴ� �ٸ� ���ڶ�� �״�� ���
	char alphabet;
	printf("���ڸ� �Է��Ͻʽÿ�: ");
	scanf(" %c", &alphabet);

	char res = alphabet >= 65 && alphabet <= 90 ? alphabet + 32 : alphabet >= 97 && alphabet <= 122 ? alphabet - 32 : alphabet; 
	//���տ����� 2�� -> ��� ����
	printf("%c�� ����մϴ�.\n", res);


	//����ڿ��� ���̸� �Է¹޾Ƽ� ���̰� 10 �̻� 20 �̸��̶�� 1000��, �� ���� ���̶�� ���� ���
	int age;
	printf("���̸� �Է��Ͻʽÿ�(��): ");
	scanf("%d", &age);
	printf("����� %s �Դϴ�.\n", 10 <= age && age < 20 ? "1000��" : "����"); //C���� ���̽�� �޸� 10<=age<20 �Ұ�

}