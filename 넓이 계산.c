#include<stdio.h>

int main(void)
{
	printf("�й� : 202104017 �̸� : ������\n");  //�й��� �̸� ��� ����

	float aa = 0;  //�غ�
	float bb = 0;  //����
	double cc = 0; //����

	printf("�ﰢ���� �غ�:"); //�ﰢ���� �غ� ��� ����
	scanf_s("%f", &aa);

	printf("�ﰢ���� ����:");  //�ﰢ���� ���� ��� ����
	scanf_s("%f", &bb);

	cc = aa * bb / 2;  //���� ���ϴ� ��
	printf("�ﰢ���� ���̴� : %f\n", cc);  //�ﰢ���� ���� ��� ����

	return 0;

}