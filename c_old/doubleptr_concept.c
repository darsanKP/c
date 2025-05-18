#include<stdio.h>

void fun(int *p)
{
	int temp =20;
	p = &temp;//interchange &temp nd temp for p and *p see 10  and 20
}

void main()
{
int a=10;
int *ptr =&a;
fun(ptr);
printf("%d \n",*ptr);

}
