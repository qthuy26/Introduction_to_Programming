#include <stdio.h>
#include <string.h>
void reverse(char s[]){
	int len = strlen(s);
	int i;
	char temp;
	for(i = 0; i < len/2; i++){
		temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
}

int main(){
	char str[500];
	int len;
	fgets(str,500,stdin);
	//Remove '\n' in fgets
	len = strlen(str);
	if (str[len-1]=='\n') 
	{
	    len--;
	    str[len]='\0';
	}
	reverse(str);
	puts(str);
}
