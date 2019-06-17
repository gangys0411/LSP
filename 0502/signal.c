#include<stdio.h>
#include<signal.h>

void (*old_fun)(int);

void signal_handler(int signo)
{
	printf("Ctrl-C 키를 눌렀습니다.\n");
	printf("다시 한 번 누르면 종료됩니다.\n");
	signal(SIGINT,old_fun);
}

int main()
{
	old_fun= signal(SIGINT,signal_handler);

	return 0;
}
