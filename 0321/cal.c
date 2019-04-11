#include<stdio.h>

int main()
{
	char opr;
	int num1=0;
	int num2=0;
	int drop=0;
	int rst=0;

	printf("연산자 입력\n");
	scanf("%c", &opr);
	printf("첫번쨰 숫자 입력\n");
	scanf("%d", &num1);
	printf("두번째 숫자 입력\n");
	scanf("%d", &num2);

	printf("결과값 : ");
	if(opr=='+')
	{
		rst=num1+num2;
		printf("%d\n", rst);
	}
	else if(opr=='-')
	{
		rst=num1-num2;
		printf("%d\n", rst);
	}
	else if(opr=='/')
	{
		rst=num1/num2;
		drop=(num1%num2)*10/num2;
		printf("%d.%d\n", rst, drop);
	}
	else if(opr=='*')
	{
		rst=num1*num2;
		printf("%d\n", rst);
	}
}
