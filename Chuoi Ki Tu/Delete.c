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

int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s",str);
	Delete(3,str);
	printf("%s",str);
}
