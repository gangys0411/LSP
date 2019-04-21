#include <stdio.h>
#include <unistd.h>

void charatatime(char *str)
{
	char *ptr;
	int c;
	setbuf(stdout, NULL);
	for (ptr = str; (c=*ptr++)!=0; )
		putc(c, stdout);
}

int main()
{
	pid_t pid;
	pid=fork();

	while(1){
	if(pid<0)
		printf("fork error\n");
	else if(pid ==0)
	{
		charatatime("output from child\n");
	}else
	{
		charatatime("output from parent\n");
	}
	sleep(1);
	}
	return 0;
}

