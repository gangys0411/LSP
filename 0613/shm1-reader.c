#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int shm_id;
	void *shm_addr;
	int count=0;

	if(-1==(shm_id=shmget((key_t)77357735,1024,IPC_CREAT | 0666)))
	{
		perror("shmget() error");
		return -1;
	}

	if((void*)-1==(shm_addr=shmat(shm_id,(void*)0,0)))
	{
		perror("shmat() error");
		return -1;
	}

	while(1)
	{
		printf("%s\n",(char*)shm_addr);

		sleep(1);
	}

	return 0;
}
