#include<stdio.h>
int main() {
	printf("=============\n");
	printf("�й�: 202104017\n�̸�: ������\n");  //�й��� �̸�
	printf("=============\n");

	char ff;  //��������
	float r, d, h, g, s, a; //������, �غ�, ����, ����, ����, ����
	printf("R : �簢��, C : ��, T : �ﰢ��\n");
	printf("���ڸ� �Է��ϼ���:");
	scanf_s("%c", &ff);  //R,C,T�� �Է�

	switch (ff) {
	case 'R':  //�簢��
	case 'r':
		printf("���� ���� ���� �Է��ϼ���: ");
		scanf_s("%f %f", &g, &s);  //���� ���� �� �Է�
		a = g * s;  //�簢�� ���� ����
		printf("���: %f",a);  //���
		break;

	case 'C':  //��
	case 'c':
		printf("������ ���� �Է��ϼ���:");
		scanf_s("%f", &r);  //������ �� �Է�
		a = 3.141592 * r * r;  //�� ���� ����
		printf("���: %f", a);  //���
		break;

	case 'T':  //�ﰢ��
	case 't':
		printf("�غ��� ���̸� �Է��ϼ���:");
		scanf_s("%f %f", &d, &h);  ///�غ� ���� �� �Է�
		a = d * h * 0.5;  //�ﰢ�� ���� ����
		printf("���: %f", a);  //���
		break;
	}

	return 0;
}