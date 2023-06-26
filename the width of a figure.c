#include<stdio.h>
int main() {
	printf("=============\n");
	printf("학번: 202104017\n이름: 박윤미\n");  //학번과 이름
	printf("=============\n");

	char ff;  //도형선택
	float r, d, h, g, s, a; //반지름, 밑변, 높이, 가로, 세로, 넓이
	printf("R : 사각형, C : 원, T : 삼각형\n");
	printf("문자를 입력하세요:");
	scanf_s("%c", &ff);  //R,C,T중 입력

	switch (ff) {
	case 'R':  //사각형
	case 'r':
		printf("가로 세로 값을 입력하세요: ");
		scanf_s("%f %f", &g, &s);  //가로 세로 값 입력
		a = g * s;  //사각형 넓이 공식
		printf("결과: %f",a);  //결과
		break;

	case 'C':  //원
	case 'c':
		printf("반지름 값을 입력하세요:");
		scanf_s("%f", &r);  //반지름 값 입력
		a = 3.141592 * r * r;  //원 넓이 공식
		printf("결과: %f", a);  //결과
		break;

	case 'T':  //삼각형
	case 't':
		printf("밑변과 높이를 입력하세요:");
		scanf_s("%f %f", &d, &h);  ///밑변 높이 값 입력
		a = d * h * 0.5;  //삼각형 넓이 공식
		printf("결과: %f", a);  //결과
		break;
	}

	return 0;
}