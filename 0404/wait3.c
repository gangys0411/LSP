#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int status;

	if((pid = fork()) < 0)
		printf("fork error");
	else if (pid == 0)
		exit(7);
}
