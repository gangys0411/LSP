#include <stdio.h>
#include <unistd.h>

int main()
{
	pid_t pid;
	int i;

	for(i=0; i<5; i++)
	{
		if ((pid = fork()) <0)
		{
			printf("fork error");
		} else if (pid == 0)
		{
			printf("bye form child %d: %d\n", i, getpid());
			return 0;
		}
	}
	sleep(60);
	printf("bye from parent\n");
	return 0;
}

