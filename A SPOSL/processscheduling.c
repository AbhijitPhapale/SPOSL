#include<stdio.h>
#define max 100
void main()
{
 	int i,j,n,bt[max],wt[max],tat[max];
	float awt=0,atat=0;
	printf("Enterthenumberofprocess:");
	scanf("%d",&n);
	printf("Enterthebursttimeoftheprocess:");
	for(i=0;i<n;i++)
	{
	 	scanf("%d",&bt[i]);
	}
	printf("\n");
	printf("Process\tBursttime\tWaitingtimr\tturnaroundtime\n\n");
	for(i=0;i<n;i++)
	{
	 	wt[i]=0;
		tat[i]=0;
		for(j=0;j<i;j++)
		{
		 	wt[i]=wt[i]+bt[i];
		}
		
		tat[i]=wt[i]+bt[i];
		awt=awt+wt[i];
		atat=atat+tat[i];
		printf("%d\t%d\t\t%d\t\t%d\n\n",i+1,bt[i],wt[i],tat[i]);
	}
	
	awt=awt/n;
	atat=atat/n;
	printf("Averagewaitingtime=%f\n\n",awt);
	printf("Averageturnaroundtime=%f\n",atat);
}


/*
Enterthenumberofprocess:4
Enterthebursttimeoftheprocess:4 10 6 8
*/



