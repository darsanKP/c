#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{
return *(int*)a-*(int*)b;
}
int binSearch(int *arr,int n,int target)
{
int left=0;
int right=n-1;
int mid;
while(left<=right)
{
mid=left+(right-left)/2;

if(arr[mid]==target)
	return 1;
else if(arr[mid]<target)
	left = mid+1;
else if(arr[mid]>target)
        right = mid-1;
}
return 0;
}

int main()
{
int arr[] ={0,5,7,2,7,4};
int n=sizeof(arr)/sizeof(arr[0]);
qsort(arr,n,sizeof(int),comp);

for(int i=0;i<n;i++)
	printf("%d ",arr[i]);

printf("##%d",binSearch(arr,n,2));

return 0;
}
