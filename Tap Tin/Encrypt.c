#include <stdio.h>
#include <string.h>

void encrypt(char *sInput, char *sOutput){
	FILE *f, *fptr;
	f = fopen(sInput, "r");
	fptr = fopen(sOutput, "w");
	char s[50];
	while(fgets(s, 50, f) != NULL){
		int i;
		for(i = 0; i < strlen(s); i++){
			if(s[i] >= 'A' && s[i] <= 'Z' && s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 3;
			write_text(fptr, s[i]);
		}
	}
	
}

void write_text_2(FILE *f, char s[]){
	fprintf(f, "%c", s);
}

void write_text(FILE *f, char s[]){
	fprintf(f, "THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG", s);
}

int main(){
	//char s[50];
	//write_text(f, s);
	encrypt("write_text.txt", "read_text.txt");
 }
