#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int tmp = atoi(argv[1]);
	int sum = 0;
	while(tmp!=0)
	{
		sum += tmp%10;
		tmp /= 10;
	}
	printf("SUM:%d\n",sum);
return 0;

}
