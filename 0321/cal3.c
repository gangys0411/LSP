#include <stdio.h>
#include "cal.h"

int main()
{
	char opr;
	int num1=0;
	int num2=0;

	printf("연산자 입력\n");
	scanf("%c", &opr);
	printf("첫번쨰 숫자 입력\n");
	scanf("%d", &num1);
	printf("두번째 숫자 입력\n");
	scanf("%d", &num2);

	cla(opr, num1, num2);
}
