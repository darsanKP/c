/*
Write a function to extract the digits of a number
The function takes two arguments.
first is a 32 bit signed integer and second is a pointer to a character buffer
The function will fill the buffer with the ascii values of each digit in the number.
Do not use any library function.
Do not use any local variable.
Write only the function. No other line of code.
*/

#include<stdio.h>
#include<stdint.h>
void func(int t,char *c)
{
	if(t/10)
		func(t/10,c);
	while(*c) c++;	
	*c++ = t%10 +'0';
	

}

int main()
{
	char c[10]="" ;
	uint32_t a=321;
	func(a,c);
	printf("%s",c);
return 0;
}
