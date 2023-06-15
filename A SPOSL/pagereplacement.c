#include<stdio.h>
int main()
{
 	int i,j,n,ref_str[50],frame[10],no,k,avail,fcount=0; //Declarationofvariablerequired
	printf("\nENTERTHENUMBEROFPAGES:\n");
	scanf("%d",&n); //totalno.ofpagesinreference string 
	printf("\nENTERTHEPAGENUMBER:\n");
	for(i=1;i<=n;i++) //acceptentirereferencestring
	scanf("%d",&ref_str[i]);
	printf("\nENTERTHENUMBEROFFRAMES:");
	scanf("%d",&no); 
	for(i=0;i<no;i++)frame[i]=-1; //initializeallpageframeto-1 
	j=0; //initializepageframepointer 
	printf("\nrefstring \tpageframes \tHit/Fault\n"); 
	for(i=1;i<=n;i++)
	{ 
		printf("%d\t\t",ref_str[i]);
		avail=0; //Defaultvalueofavailableflagis0 
		for(k=0;k<no;k++)
		 	if(frame[k]==ref_str[i])//inputof page requestediscomparedwith existingcontentofFRAME 
			{ 
				avail=1; //aspagefoundavailableisturned1 
				for(k=0;k<no;k++) 
				printf("%d\t",frame[k]); //PrintCurrentstate of FRAME 
				printf("H"); //IndicationofPageHit 
			}
			if(avail==0) //input page requestedNOTexistingin FRAME 
			{ 
				frame[j]=ref_str[i]; //placepagerequested atjthlocationinFRAME 
				j=(j+1)%no; //UpdateJfornextCycle 
				fcount++; //IncrementCounterfor PageFault 
				for(k=0;k<no;k++) 
				printf("%d\t",frame[k]); //PrintCurrentstateof FRAME 
				printf("F"); //IndicationofPageFault 
			}
			printf("\n");
	} 
	printf("PageFaultIs%d",fcount);
	return 0;
}


/*
ENTERTHENUMBEROFPAGES:
7

ENTERTHEPAGENUMBER:
5
4
5
4
5
3
1

ENTERTHENUMBEROFFRAMES:3
*/
