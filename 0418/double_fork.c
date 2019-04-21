#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	pid_t pid;

	pid=vfork();

	if(pid<0)
	{
		printf("fork error\n");
	}else if(pid==0)
	{
		pid=fork();
		if(pid<0)
		{
			printf("fork error\n");
		}else if(pid>0)
		{
			exit(0);
		}
		sleep(2);
		printf("2nd child, parent pid = %d\n", getppid());
		exit(0);
	}
}
