#include <stdio.h>

int main(void)
{
	printf("학번 : 202104017\n"); //학번
	printf("이름 : 박윤미\n");  //이름

	double x;  //x는 실수

	printf("실수를 입력하세요 :"); //실수를 입력하세요 출력
	scanf_s("%lf", &x); //실수 입력

	printf("입력한 실수는 %lf이며, 지수표기법으로 표현하면 %e 와 같습니다.", x,x); //결과

	return 0;
}