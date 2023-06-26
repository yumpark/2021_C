#include<stdio.h>

int main() {
	printf("============\n");
	printf("학번: 202104017\n이름: 박윤미\n");
	printf("============\n");

	char a;

	printf("문자 하나를 입력해주세요:");
	scanf_s("%c", &a);
	printf("입력하신 문자는 \'%c\'이고, 아스키코드값은 \"%d\"입니다.", a, a);

	return 0;
}