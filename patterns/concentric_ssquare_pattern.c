#include<stdio.h>


int main()
{
	int n;
	printf("Enter the size:\n");
	scanf("%d",&n);

	int size = 2*n-1;
	int dist;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			dist = i<j?i:j;
			dist = dist<size-1-i?dist:size-1-i;
			dist = dist<size-1-j?dist:size-1-j;

			printf(" %d",n-dist);

		}
		printf("\n");
	}



}
