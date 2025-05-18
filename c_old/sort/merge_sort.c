#include<stdio.h>


void merge(int *a,int l,int mid,int r)
{
	int n1,n2;
	n1= mid -l+1;
	n2= r -mid;

	int left[n1],right[n2];
	
	for(int i=0;i<n1;i++)
		left[i]=a[l+i];
	for(int j=0;j<n2;j++)
		right[j]=a[mid+1+j];

	int i=0,j=0,k=l;
	while(i<n1 && j <n2)
	{
	if(left[i]<=right[j])
	{
		a[k]=left[i];
		i++;
	}
	else
	{
		a[k]=right[j];
		j++;
	}
	k++;
	}
	while(i<n1)
	{
		a[k]=left[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		a[k]=right[j];
		k++;
		j++;
	}
}


void mergeSort(int *a,int left,int right)
{
	if(left<right)
	{
	int mid = left + (right - left)/2;

	mergeSort(a,left,mid);
	mergeSort(a,mid+1,right);
	

	merge(a,left,mid,right);

	}
}



int main()
{
	int a[] ={2,3,6,4,7,5,2,6,8,0,3,6};
	int n = sizeof(a)/sizeof(a[0]);

	mergeSort(a,0,n-1);

	for(int i=0;i<n;i++)
		printf("%d ",a[i]);

	return 0;

}
