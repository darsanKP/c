#include<stdio.h>

void main()
{
	int a =1234,t=0;
	while(a!=0)
	{
		t=(t*10)+(a%10);
		a/=10;
	}
	printf("result:%d",t);
}
