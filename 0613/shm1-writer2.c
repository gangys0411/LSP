//문자열 쓰기

#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int shm_id;
	void *shm_addr;
	char count[100];

	if(-1==(shm_id=shmget((key_t)9999,1024,IPC_CREAT | 0666)))
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
		scanf("%s",count);
		sprintf((char*)shm_addr, "%s",count);

		sleep(1);
	}

	return 0;
}
