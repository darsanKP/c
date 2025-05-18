#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p = (char*)malloc(8);
	//strcpy(p,"abcdefg");

	//printf("%s",p);
	//p = (char*)realloc(p,10);
	strcpy(p,"abcdefgii");

        printf("%s",p);
	free(p);
	return 0;

}
