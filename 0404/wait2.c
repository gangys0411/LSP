#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;
	int status;
	if ((pid = fork()) <0)
		printf("fork error");
	else if (pid ==0)
	{
		printf("hi from child\n");
		sleep(100);
		exit(7);
	}
	else
	{
		if (wait(&status) != pid)
			printf("wait error");
		printf("hi from parent\n");
		if (WIFEXITED(status))
			printf("normal termination, exit status = %d\n",
					WEXITSTATUS(status));
		else if (WIFSIGNALED(status))
			printf("abnormal termination, signal number = %d\n",
					WTERMSIG(status));
	}
	return(0);
}
