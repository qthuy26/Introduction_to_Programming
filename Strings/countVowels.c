#include <stdio.h>

int countVowels(char s[]){
	int i = 0, count = 0;
	while(s[i] != '\0'){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'U' || s[i] == 'I')
			count++;
		i++;
	}
	return count;
}

int main(){
	char str[500];
	fgets(str,500,stdin);
	printf("%s%d",str,countVowels(str));
}
