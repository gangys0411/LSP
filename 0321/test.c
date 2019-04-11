#include<stdio.h>

int fun(int x);

int main()
{
	int x=5;

	x=fun(x);

	printf("Hello World!\n"	);
	printf("%d\n",x);
	return 0;
}

int fun(int x)
{
	return x*10;
}
