#include<stdio.h>

int main(void) {

	printf("�й� : 202104017 �̸� : ������\n"); // �й��� �̸� ��� ����

	double inch = 0; //��ġ
	double mm = 0; //mm����

	printf("��ġ ������ �Է�: "); //��ġ ������ �Է� ��� ����
	scanf_s("%lf", &inch);

	mm = inch * 25.4; //��
	printf("%lf ��ġ = %lf mm�Դϴ�.\n", inch, mm); //��ġ = mm ��� ����

	return 0;
}