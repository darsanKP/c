#include<stdio.h>


void sort(int a[],int n)
{
for(int i=0;i<n-1;i++)
{
	int minidx = i;
	for(int j=i+1;j<n;j++)
	{
	if(a[j]<a[minidx])
	{
	minidx=j;
	}
	}
	int temp = a[i];
	a[i]=a[minidx];
	a[minidx]=temp;

	
}

}


int main()
{
int a[]={5,6,1,9,1,2,6,7,3,4,9,6};
int n=sizeof(a)/sizeof(a[0]);

sort(a,n);

for(int i=0;i<n;i++)
	printf("%d ",a[i]);

return 0;
}
