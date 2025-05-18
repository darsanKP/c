#include <stdio.h>
#include <string.h>

void rev(char* s)
{
	char t;
	int i=0;
	int len = strlen(s)-1;
	while(i<len)
	{
		t=s[i];
		s[i]=s[len];
		s[len]=t;

		i++;
		len--;
	}
}

int main() {
char s[] = "abcde";
rev(s);
    // Reversing string using strrev()
    printf("%s", s);
  
    return 0;
}
