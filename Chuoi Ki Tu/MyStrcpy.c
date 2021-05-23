#include <stdio.h>
#include <string.h>

void mystrcpy(char *s1, char *s2){
	int i, len = strlen(s1);
	for(i = 0; i <= len; i++){
		s2[i] = s1[i];
	}
}

int main(){
	char c[100];
	mystrcpy("Hello World", c);
	printf("%s", c);
}
