#include <stdio.h>
#include <string.h>
int main(){
	char s[500];
	fgets(s, 500, stdin);
	int i, count = 1;
	int len = strlen(s);
	if (s[len-1]=='\n') 
	{
	    len--;
	    s[len]='\0';
	}
	puts(s);
	for(i = 0; i < len; i++){
		if(s[i] == ' ' && (s[i+1] >= 'A' && s[i+1] <= 'Z') || (s[i+1] >= 'a' && s[i+1] <= 'z'))
			count++;
	}
	printf("%d", count);
}
