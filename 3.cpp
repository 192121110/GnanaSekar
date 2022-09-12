#include<stdio.h>
int main()
{
	int bt[10],p[20],wt[20],i,j,n,tot=0;
	int pos,temp;
	float avgwt;
	printf("enter the number of process :");
	scanf("%d",&n);
	printf("enter the burst time :");
	for (i=0;i<n,i++)
	{
		printf("p%d",i+1);
		scanf("%d",&bt[i]);
		p[i]=i+1;
	}
	for (i=0;i<n,i++)
	{
		pos=i;
		for (j=0;j<n,j++)
		{
			if(bt[j]<bt[pos])
			{
				pos=j;
			}
		}
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos=]bt[i];
		tem=p[i];
		p[i]=p[pos];
		p[pos]=temp;
	}
	wt[0]=0
	
}

