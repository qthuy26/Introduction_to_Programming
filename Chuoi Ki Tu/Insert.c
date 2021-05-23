#include <stdio.h>
#include <string.h>
void Insert(char c, int p, char st[]){
	int len = strlen(st);
	int i;
	for(i = len-1; i >= p; i--){
		st[i+1] = st[i];
	}
	st[p] = c;
	len++;
	st[len] = '\0';
}

int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Insert(' ', 3,str);
	printf("%s",str);
}
