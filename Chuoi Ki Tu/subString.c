#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *subString(char s[], int pos, int number){
	char *des;
	des = (char*)malloc((number+1)*sizeof(char));
	int i, n = 0;
	for(i = pos; i <= pos + number; i++){
		des[n] = s[i];
		n++;
	}
		
	des[n] = '\0';
	return des;
}

int main(){
	char *st="toi di hoc";
	char *res = subString(st, 4,2);
	puts(st);
	puts(res);
	free(res);
}
