#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	int tmp = atoi(argv[1]);
	int rev = 0;
	int t = tmp;
	while(tmp)
	{
		rev= (rev*10) + (tmp%10);
		tmp /= 10;
	}


	
	if(t==rev)
	printf("pallindromei\n");
	else
	printf(" not pallindrome\n");
return 0;

}
