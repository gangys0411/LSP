#include <stdio.h>
#include <string.h>

int main()
{
	double j,i;
	char *bug=bug;
	
	for(i=0; i<5; i++)
	{
		printf("loop %d : ",(int)i);
		j=i/2+i;
		printf("\tj is %lf \n",j);

	}

	strcpy(bug,"hi!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
	printf("bug is %s\n", bug);

	return 0;
}
