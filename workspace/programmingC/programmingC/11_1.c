#define _CRT_SECURE_NO_WARNINGS//strcpy ���� ����
#include <stdio.h>
#include <string.h> //���ڿ�(�迭)�� �ٸ� �� ���� 

void main() {
	char str[] = "korea";
	//str = "japan"; �Ұ�����: �迭�̱� ������ �ٸ� �� ������ �� ����
	strcpy(str, "japan"); //str[a]���� �����س��� ���, aĭ�� �Ѿ�� ���� �߻�

	//strcmp(���ڿ�1, ���ڿ�2); ���ڿ� 1�� ���ڿ� 2�� ���� ������ 0, �ٸ��� 1 or -1
	printf("%d\n",strcmp(str, "korea")); //���ڿ� 1�� ù���ڰ� ���ڿ� 2���� �ƽ�Ű�ڵ� �� ���̸� -1
	printf("%d\n", strcmp(str, "japan"));
	printf("%d\n", strcmp(str, "apple")); //���ڿ� 1�� ù���ڰ� ���ڿ� 2���� �ƽ�Ű�ڵ� �� �ڸ� 1

	printf("���ڿ��� ����: %d\n", strlen(str));

	int arr[] = { 1,2,3 };
	//arr = { 10,20,30 }; �Ұ�����: �迭�̱� ������!

	printf("%s\n", str);
	printf("%d\n", str);

	//���ڿ� �Է¹ޱ�
	char input[20]; //�迭�� ��������� �Է� ���� �� ���� --> ĭ�� ����
	scanf("%s", input); //�迭�� �ּ��̱� ������ & �� �ʿ� ����
	printf("�Էµ� ��: %s\n", input);

	//����ڿ��� ���ڿ��� �Է¹޾� �빮�ڸ� �ҹ��ڷ�, �ҹ��ڸ� �빮�ڷ�, �������� �״�� ���
}