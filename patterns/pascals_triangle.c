#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(int argc,char* argv[])
{
	int n = atoi(argv[1]);
	int current[SIZE],prev[SIZE];
	for(int i=0;i<n;i++)//rows
	{
		for(int j=0;j<=i;j++)//var
		{
			if(j==0 || j==i)
				current[j]=1;
			else
				current[j]=prev[j]+prev[j-1];
		}

		for(int k=0;k<n-i-1;k++)
			printf(" ");
		for(int t=0;t<=i;t++){
			printf(" %2d",current[t]);
			prev[t]=current[t];
		}
		printf("\n");

	}
return 0;
}

