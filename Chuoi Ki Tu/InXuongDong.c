#include <stdio.h>
#include <string.h>

void Delete(int p, char st[]){
	int len = strlen(st);
	int i;
	for(i = p; i <= len-2; i++){
		st[i] = st[i+1];
	}
	len--;
	st[len] = '\0';
}

void DeleteSpace(char st[]){
	int len = strlen(st);
	int i;
	for(i = 0; i < len; i++)
		if(st[i] == ' ' && st[i+1] == ' '){
			Delete(i, st);
			i--;
		}
			
	while(st[0] == ' '){
		Delete(0, st);
	}
	while(st[len-1] == ' '){
		Delete(len-1, st);
	}
}

int main(){
	char s[500];
	fgets(s, 500, stdin);
	int len = strlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}	
	DeleteSpace(s);
	int i;
	for(i = 0; i < len; i++){
		if(s[i] != ' ')
			printf("%c", s[i]);
		else
			printf("\n");
	}
}
