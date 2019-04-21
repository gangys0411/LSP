#include <stdio.h>
#include <unistd.h>

int name=0;

int main()
{
	pid_t pid;

	name=1;
	if(name==1){
		printf("I'm parent!\n");
	} else
		printf("child is dead!\n");

	if((pid=fork())<0){
		printf("fork error\n");
	}else
	if(pid==0){
		name=0;
		return name;
	}
	
	else
	{
		if(name==1){
			printf("I'm parent!\n");
		} else
			printf("child is dead!\n");
	}

	return 0;
}
