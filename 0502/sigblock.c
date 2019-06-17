#include <stdio.h>
#include <signal.h>

void sigint_handler(int signo)
{
	printf("Crtl-C를 누르셨습니다.\n");
	printf("3초간 대기하겠습니다. 이 동안 다른 신호는 받지 않습니다.\n");


}

int main()
{
	struct sigaction act;

	act.sa_handler=sigint_handler;
	sigfillset(act.sa_mask);

	sigaction(SIGINT, act, NULL);

	while(1)
	{
		printf("sigint\n");
		sleep(1);
	}

	return 0;
}
