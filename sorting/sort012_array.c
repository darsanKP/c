#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[] = {0,1,0,2,1,0,2,1,1,0};

	int size = sizeof(a)/sizeof(a[0]);

	int left=0,mid=0,right=size-1;
	int temp;
	while(mid<=right)
	{
		if(a[mid]==0)
		{
			temp=a[left];
			a[left]=a[mid];
			a[mid]=temp;
			mid++;
			left++;
		}
	       	else if(a[mid]==1)
			mid++;
		else
		{
			temp=a[right];
			a[right]=a[mid];
			a[mid]=temp;
			right--;
		}
	}

	for(int i=0;i<size;i++)
		printf("%d ",a[i]);

	return 0;
}
