#include<stdio.h>

void func()
{
	static int i=1;
if(i==101)
	return;
else
{
	printf("%d ",i++);
	func();
}

}

int main()
{
	func();
return 0;
}
