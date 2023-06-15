#include<stdio.h>
#include<sys/types.h>
//#include<unistd.h>
int main()
{
	pid_t pid;
    pid = fork();
	if(pid==-1)
	{
	    printf("ForkFailed!!\n");
	}
	else if(pid==0)
	{
		printf("Childprocess ID is::\"%d\"and my parentprocess ID is::\"%d\"\n\n", getpid(),getppid());
	}
	else
	{
		printf("\nParentprocess ID is::\"%d\"and my grandparent process ID is::\"%d\" \n",getpid(),getppid());
	}
	return 0;
}
