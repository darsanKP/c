#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{
	int n = atoi(argv[1]);
	int size[100];
	for(int i=1;i<=n;i++)
	{
		for(int k=0;k<n-i;k++)
			printf(" ");
		for(int j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
return 0;
}

