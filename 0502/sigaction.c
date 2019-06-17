#include <stdio.h>
#include <signal.h>

struct sigaction act_new;
struct sigaction act_old;

void sigint_handler(int signo)
{
	printf("Crtl-C를 누르셨습니다.\n");
	printf("한 번 더 누르면 종료됩니다.\n");
	sigaction(SIGINT, &act_old, NULL);
}


int main()
{
	sigaction(SIGINT,&act_new, &act_old);

	while(1)
		printf("sigaction\n");
		
	return 0;
}
