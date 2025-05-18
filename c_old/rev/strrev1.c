#include <stdio.h>
#include <string.h>

void rev(char* s)
{
	char t[100];
	int i=0;
	int len = strlen(s);
	while(len)
		t[i++]=s[len-- -1];
	t[i]='\0';
	strcpy(s,t);
}

int main() {
char s[] = "abcde";
rev(s);
    // Reversing string using strrev()
    printf("%s", s);
  
    return 0;
}
