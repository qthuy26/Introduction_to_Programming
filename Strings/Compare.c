#include <stdio.h>
#include <string.h>

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

int Compare(char s1[], char s2[]){
	int i = 0, j = 0, d = 0;
	Uppercase(s1);
	Uppercase(s2);
	while(s1[i] != '\0' && s2[j] != '\0' && !d){
		d = s1[i] - s2[j];
		i++;
		j++;
	}
	return d;
}

int main(){
	char s1[500], s2[500];
	int len;
	fgets(s1,500,stdin);
	//Remove '\n' in fgets
	len = strlen(s1);
	if (s1[len-1]=='\n') 
	{
	    len--;
	    s1[len]='\0';
	}
	
	fgets(s2,500,stdin);
	//Remove '\n' in fgets
	len = strlen(s2);
	if (s2[len-1]=='\n') 
	{
	    len--;
	    s2[len]='\0';
	}
	
	if (Compare(s1,s2) < 0) printf("1 < 2");
	else if (Compare(s1,s2) > 0) printf("1 > 2");
	else printf("1 = 2");
}
