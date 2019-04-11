#include <unistd.h>
#include <stdio.h>
#include <string.h>

char buf[]="write to stdout\n";
int main()
{
	pid_t pid;
	if (write(STDOUT_FILENO, buf, strlen(buf)) != strlen(buf))
		printf("write error");
	printf("printf by %d: before fork\n", getpid());
	if ((pid=fork()) < 0)
	{
		printf("fork error");
	} else if (pid ==0)
	{
		printf("printf by %d: hi form child!\n", getpid());
	} else
	{
		printf("printf by %d: hi from parent!\n", getpid());
	}
	printf("printf by %d: bye\n", getpid());
	return 0;
}
