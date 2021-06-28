#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
	char filename[50];
	fgets(filename, 50, stdin);
	if(filename[strlen(filename)-1] == '\n')
		filename[strlen(filename)-1] = '\0';
	f = fopen(filename, "r");
	if(f == NULL){
		printf("Error");
		return 1;
	}  
	char s[50];
	while(fgets(s, 50, f) != NULL){
	    if(s[strlen(s)-1] == '\n')
		    s[strlen(s)-1] = '\0';
		char *sub;
		sub = strstr(s, "//");
		if(sub != 0){
			int i;
			for(i = 0; i < strlen(s); i++)
				if(s[i] == '/' && s[i+1] == '/')
					s[i] = '\0';
		}
		puts(s);
	}
    fclose(f);
    return 0;
}
