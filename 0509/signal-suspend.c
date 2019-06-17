#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

struct sigaction act_new;
struct sigaction act_old;

void sigusr1_handler(int signo)
{
	printf("SIGUSR1을 받았습니다.\n");
}

int main()
{
	sigset_t sigset;

	sigfillset(&sigset);
	sigdelset(&sigset, SIGUSR1);

	act_new.sa_handler=sigusr1_handler;
	sigfillset(&act_new.sa_mask);

	sigaction(SIGUSR1,&act_new,NULL);

	printf("PID: %d , SIGUSR1만을 기다리는 중입니다.\n", getpid);

	sigsuspend(&sigset);

	return 0;
}
