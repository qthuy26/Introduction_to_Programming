#include <stdio.h>
#include <string.h>
int main(){
	char name1[50], name2[50];
	fgets(name1, 50, stdin);
	fgets(name2, 50, stdin);
	int len1 = strlen(name1);
	int len2 = strlen(name2);
	printf("%d %d\n", len1, len2);
	if(name1[len1-1] == '\n')
		name1[len1-1] = '\0';
	if(name2[len2-1] == '\n')
		name2[len2-1] = '\0';
	len1 = strlen(name1);
	len2 = strlen(name2);
	printf("%d %d\n", len1, len2);
	puts(name1);
	puts(name2);
	return 0;
}
