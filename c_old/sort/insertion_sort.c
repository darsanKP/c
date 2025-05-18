#include<stdio.h>


int main()
{
	int arr[]={1,3,6,9,4,2,7,4,2};

	int size=sizeof(arr)/sizeof(arr[0]);
	int key,j;
	//insertion sort
	for(int i=1;i<size;i++)
	{
	key=arr[i];
	j=i-1;

	while( j>=0 && arr[j]>key)
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=key;

	}
	for(int i=0;i<size;i++)
	printf("%d ",arr[i]);
return 0;
}
