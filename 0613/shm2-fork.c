// fork

#include <stdio.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
	int shm_id;
	void *shm_addr;
	int *cal_num;
	int pid;

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

	cal_num=(int *)shm_addr;

	pid=fork();


	if(pid==0)
	{

		while(1)
		{
			*cal_num=*cal_num+1;
			printf("child: %d\n",*cal_num);

			sleep(1);
		}
	}else
	{
		while(1)
		{
			sleep(1);
			printf("parent %d\n", *cal_num);
		}
	}


	return 0;
}
