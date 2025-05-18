#include<stdio.h>


int main()
{
	int a[]={2,6,3,5,8,9,3,5,1};
	int size =sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size-1;i++)
		for(int j=0;j<size-1-i;j++)
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(int i=0;i<size;i++)
		printf("%d ",a[i]);
	return 0;
	

}
