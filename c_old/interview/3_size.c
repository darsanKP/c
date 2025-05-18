#include <stdio.h>
#define MY_SIZE(var) ((char*)(&var+1)-(char*)(&var)) 
struct MyStruct {
    int a;
    char b;
    double c;
};

int main() {
    struct MyStruct *ptr1 ;
    struct MyStruct *ptr2 = ptr1 + 1;
    int size = (char *)(ptr1+1) - (char *)ptr1;
	char *a ="aadja";
	
    printf("Size of struct MyStruct: %d bytes\n char string size %ld", size,MY_SIZE(a));
    return 0;
}

