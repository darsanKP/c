#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *p =(int*)malloc(4);
    free(p);
    free(p);
    
    //printf("%p",p);

    return 0;
}
