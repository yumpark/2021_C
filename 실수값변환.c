#include <stdio.h>

int main(void)
{
	printf("�й� : 202104017\n"); //�й�
	printf("�̸� : ������\n");  //�̸�

	double x;  //x�� �Ǽ�

	printf("�Ǽ��� �Է��ϼ��� :"); //�Ǽ��� �Է��ϼ��� ���
	scanf_s("%lf", &x); //�Ǽ� �Է�

	printf("�Է��� �Ǽ��� %lf�̸�, ����ǥ������� ǥ���ϸ� %e �� �����ϴ�.", x,x); //���

	return 0;
}