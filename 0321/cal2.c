#include <stdio.h>

int cla(char opr, int num1, int num2)
{
	int result=0;
	int drop=0;
	if(opr=='+')
	{
		result=num1+num2;
	}
	else if(opr=='-')
	{
		result=num1-num2;
	}
	else if(opr=='/')
	{
		result=num1/num2;
		drop=(num1%num2)*10/num2;
	}
	else
	{
		result=num1*num2;
	}

	if(opr=='/')
	{
		printf("결과값 : %d.%d\n", result, drop);
	}else
	printf("결과값 : %d\n", result);
}

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
