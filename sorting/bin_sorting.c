#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = {1,0,1,1,0,1,0,0,0,1,0,1};

	int size = sizeof(a)/sizeof(a[0]);

	int left=0,right=size-1,temp;
	while(left<=right)
	{
		if(a[left]==0)
			left++;
		else if(a[left]==1)
		{
			temp=a[right];
			a[right]=a[left];
			a[left]=temp;
			right--;

		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",a[i]);

	return 0;
}
