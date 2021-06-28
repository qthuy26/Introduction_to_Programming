#include <stdio.h>
#include <string.h>

int isPalindrome(char s[]){
	int i;
	int len = strlen(s);
	for(i = 0; i < len/2; i++){
		if(s[i] != s[len-i-1])
			return 0;
	}
	return 1;
}

int main(){
	char s[500];
	int len;
	fgets(s, 500, stdin);
	len = strlen(s);
	if(s[len-1] == '\n'){
		len--;
		s[len] = '\0';
	}
	puts(s);
	if(isPalindrome(s))
		printf("YES");
	else
		printf("NO");
}


