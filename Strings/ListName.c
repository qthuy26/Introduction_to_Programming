#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%d", &n);
	char s[n][50];
	int i;
	fflush(stdin);
	for(i = 0; i < n; i++){
		fgets(s[i], 50, stdin);
		int len = strlen(s[i]);
		if(s[i][len-1] == '\n')
			s[i][len-1] = '\0';
	}
	for(i = 0; i < n; i++){
		printf("%d. ", i+1);
		puts(s[i]);
	}
}
