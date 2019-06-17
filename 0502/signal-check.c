#include<stdio.h>
#include <signal.h>

int main()
{
	sigset_t set;

	sigemptyset(&set);
	sigaddset(&set, SIGINT);

	if(sigismember(&set,SIGINT)==1)
		printf("SIGINT는 포함되어 있습니다.\n");
	else if(sigismember(&set,SIGINT)==0)
		printf("SIGINT는 포함되어 있지 않습니다.\n");
	else
		printf("sigismember()호출에 실패했습니다.\n");

	if(sigismember(&set,SIGSYS)==1)
		printf("SIGSYS는 포함되어 있습니다.\n");
	else if(sigismember(&set,SIGSYS)==0)
		printf("SIGSYS는 포함되어 있지 않습니다.\n");
	else
		printf("sigismember()호출에 실패했습니다.\n");

	sigdelset(&set, SIGINT);

	if(sigismember(&set,SIGINT)==1)
		printf("SIGINT는 포함되어 있습니다.\n");
	else if(sigismember(&set,SIGINT)==0)
		printf("SIGINT는 포함되어 있지 않습니다.\n");
	else
		printf("sigismember()호출에 실패했습니다.\n");

	return 0;
}
