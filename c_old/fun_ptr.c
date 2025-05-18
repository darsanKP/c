#include<stdio.h>


void greet(void(*funtion)())
{
printf("good \n");
funtion();
}
void night()
{
printf("night \n");
}
void morning()
{
printf("morning \n");
}
void main()
{
greet(night);
greet(morning);



}
