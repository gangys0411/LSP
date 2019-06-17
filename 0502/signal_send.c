#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int main(int argc, char * argv[])
{
	if(argc<2)
	{
		printf("사용법 ./signal_send 프로세스 id\n");
	}
	else
	{
		kill(atoi(argv[1]),SIGKILL);
	}

	return 0;
}
