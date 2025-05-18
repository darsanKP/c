#include<stdio.h>


void sort(int a[],int n)
{
for(int i=0;i<n-1;i++)
for(int j=0;j<n-1-i;j++)
{
	if(a[j]>a[j+1])
	{
	int temp = a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
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
