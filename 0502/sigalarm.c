#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int count =0;

void signal_handler(int signo)
{
	printf("알람 발생! %d초!\n",++count);
	alarm(1);
}

int main()
{
	signal(SIGALRM,signal_handler);
	alarm(1);

	while(1);

	return 0;
}
