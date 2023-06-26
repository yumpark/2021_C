#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	printf("============\n");
	printf("학번 : 202104017\n");
	printf("이름 : 박윤미\n");
	printf("============\n");
	printf("평균 구하는 프로그램\n\n");
	
	float a, b, c, d; //차례대로 국어 수학 영어 총합
	double v; //평균

	printf("국어: "); //국어 출력
	scanf_s("%f", &a); //국어 점수 입력

	printf("수학: ");  //수학 출력
	scanf_s("%f", &b);  //수학 점수 입력

	printf("영어: ");  //영어 출력
	scanf_s("%f", &c);  //영어 점수 입력

	printf("============\n");

	d = a + b + c; //총합
	printf("총합: %.0f\n",d); //총합 출력

	v = d / 3;
	printf("평균: %.2f\n",v);

	return 0;
}