#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(){
    FILE *f;
	char filename[50];
	fgets(filename, 50, stdin);
	if(filename[strlen(filename)-1] == '\n')
		filename[strlen(filename)-1] = '\0';
	f = fopen(filename, "r");  
	int i = 0;
	//char *a = (char*)malloc(sizeof(a));
	char b[50];
	while(!feof(f)){
//	    char name[50];
//		fgets(name, 50, f);
//		if(name[strlen(name)-1] == '\n')
//		    name[strlen(name)-1] = '\0';
		fgets(&b[i], 50, f);
//		a = (char*)malloc(strlen(name)*(i+1));
//		strcpy(a, name);
		if(b[i] != '\n')
	    	i++;
	}
	printf("%d", i);
//	int j;
//	for(j = 0; j < i; j++)
//		printf("%s", b[j]);
}
