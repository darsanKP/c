#include<stdio.h>


int main()
{
	int a[]={1,8,4,2,6,3,5,2,5,9};

	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n-1;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<n;j++)
		{
		if(a[j]<a[min_idx])
			min_idx=j;
		}
		int temp=a[i];
		a[i]=a[min_idx];
		a[min_idx]=temp;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);

}
