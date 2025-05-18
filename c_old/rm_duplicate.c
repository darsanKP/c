#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[])
{
	int hash[256]={0};
	int j=0;

	printf("%ld",strlen(argv[1]));
	for(int i=0;i<strlen(argv[1]);i++)
	{
	if(hash[(unsigned char)argv[1][i]]==0){
		hash[(unsigned char)argv[1][i]]++;
		argv[1][j++]=argv[1][i];}	
	}
	argv[1][j]='\0';
	

	printf("%s",argv[1]);
return 0;
}
