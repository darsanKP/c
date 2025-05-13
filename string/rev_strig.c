#include<stdio.h>

void func(char* s)
{
char *e=s,t;
while(*e)e++;
e -=1;
while(s<e)
{
t = *s;
*s =*e;
*e =t;
s++;
e--;
}

}

void main()
{
	char s[] ="reverse a string";
	func(s);
	printf("%s",s);
}
