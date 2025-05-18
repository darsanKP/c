#include<stdio.h>

void main()
{
int t;
scanf("%d",&t);
printf("0b%b\n",t);
if((t&1<<2)!=(t&1<<5))
{
	t^=(1<<2&1<<5);

printf("After swap %b",t);
}
}
