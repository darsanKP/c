#include<stdio.h>

void func(int n)
{
	int count=1;
	int size = n;
	int end = 2*size + 2*(size-2);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==0)
				printf("%4d",count++);
			else if(j==size-1)
				printf("%4d",count++);
			else if(j==0)
				printf("%4d",end--);
			else if(i==size-1)
				printf("%4d",end--);
			else
				printf("    ");
		}
		printf("\n");
	}

}
int main()
{
	func(5);
	return 0;
}
