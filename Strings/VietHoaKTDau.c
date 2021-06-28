#include <stdio.h>

int Length(char s[]){
    int i = 0;
    while(s[i] != '\0'){
    	if(s[i] == '\n')
    		s[i] = '\0';
    	i++;
	}
    return i-1;
}

void Uppercase(char s[]){
	int i = 1;
	if(s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while(s[i] != '\0'){
		if(s[i-1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		else if(s[i-1] != ' ' && (s[i] >= 'A' && s[i] <= 'Z'))
			s[i] += 32;
		i++;
	}
}

int main(){
	char str[500];
	int len;
	fgets(str,500,stdin);
	//Remove '\n' in fgets
	len = Length(str);
	if (str[len-1]=='\n') 
	{
	    len--;
	    str[len]='\0';
	}
	Uppercase(str);
	puts(str);
}
