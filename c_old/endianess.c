#include<stdio.h>

void main()
{
	char *p;
	int a=1;
	p=(char*)&a;
	if(*p==1)
		printf("little endian\n");
	else
		printf("big edian");

}
