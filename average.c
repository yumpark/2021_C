#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	printf("============\n");
	printf("�й� : 202104017\n");
	printf("�̸� : ������\n");
	printf("============\n");
	printf("��� ���ϴ� ���α׷�\n\n");
	
	float a, b, c, d; //���ʴ�� ���� ���� ���� ����
	double v; //���

	printf("����: "); //���� ���
	scanf_s("%f", &a); //���� ���� �Է�

	printf("����: ");  //���� ���
	scanf_s("%f", &b);  //���� ���� �Է�

	printf("����: ");  //���� ���
	scanf_s("%f", &c);  //���� ���� �Է�

	printf("============\n");

	d = a + b + c; //����
	printf("����: %.0f\n",d); //���� ���

	v = d / 3;
	printf("���: %.2f\n",v);

	return 0;
}