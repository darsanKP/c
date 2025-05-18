#include<stdio.h>
#include<string.h>
#include<ctype.h>
int checker(char *str)
{
	int start = 0;
	int end	  = strlen(str)-1;

	if(!isalnum(str[start]))
		start++;
	else if(!isalnum(str[end]))
		end--;
	else
	{
	if(tolower(str[start])!=tolower(str[end]))
		return 1;
	start++;
	end--;
	}

}

int main()
{
	char str[30];
	printf("Enter the string");
	fgets(str,sizeof(str),stdin);

	str[strcspn(str,"\n")]='\0';

	int result = checker(str);
	if(result==0)
		printf("pallindrome");
	else
		printf("not a pallindrome");




	
	
	
	return 0;

}
