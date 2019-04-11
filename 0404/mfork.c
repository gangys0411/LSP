#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int glob=42;

int main()
{
	int var;
	pid_t pid;
	var = 88;
	if ((pid=fork())<0)
	{
		printf("fork error");
	} else if (pid==0)
	{
		printf("child pid: %d\n", getpid());
		glob++;
		var++;
	} else
	{
		printf("parent pid: %d\n", getpid());
		sleep(1);
	}
	printf("pid = %d, glob = %d, var = %d\n", getpid(), glob, var);
	exit(EXIT_SUCCESS);
}
