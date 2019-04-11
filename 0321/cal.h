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
