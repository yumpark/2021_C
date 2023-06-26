#include<stdio.h>

int main(void) {

	printf("학번 : 202104017 이름 : 박윤미\n"); // 학번과 이름 출력 문장

	double inch = 0; //인치
	double mm = 0; //mm변형

	printf("인치 단위로 입력: "); //인치 단위로 입력 출력 문장
	scanf_s("%lf", &inch);

	mm = inch * 25.4; //식
	printf("%lf 인치 = %lf mm입니다.\n", inch, mm); //인치 = mm 출력 문장

	return 0;
}