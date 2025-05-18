#include <stdio.h>
#include <string.h>

void rev(char* s,int i,int len)
{
	if(i>=len) return;

		char t=s[i];
		s[i]=s[len];
		s[len]=t;
    printf("%s %d %d\n", s,i,len);
	return rev(s,++i,--len);
}

int main() {
char s[] = "abcde";
rev(s,0,strlen(s)-1);
    // Reversing string using strrev()
    printf("%s", s);
  
    return 0;
}
