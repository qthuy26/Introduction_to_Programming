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
		if(strlen(s) != 1)
	    	printf("%s", s);
	}
    fclose(f);
    return 0;
}
