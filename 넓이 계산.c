#include<stdio.h>

int main(void)
{
	printf("학번 : 202104017 이름 : 박윤미\n");  //학번과 이름 출력 문장

	float aa = 0;  //밑변
	float bb = 0;  //높이
	double cc = 0; //넓이

	printf("삼각형의 밑변:"); //삼각형의 밑변 출력 문장
	scanf_s("%f", &aa);

	printf("삼각형의 높이:");  //삼각형의 높이 출력 문장
	scanf_s("%f", &bb);

	cc = aa * bb / 2;  //넓이 구하는 식
	printf("삼각형의 넓이는 : %f\n", cc);  //삼각형의 넓이 출력 문장

	return 0;

}