#include <stdio.h>

void in_nguoc(int n){
	if(n==0)
		return;
	else{
		printf("%d ", n%10);
		in_nguoc(n/10);
	}
}

int main(){
	in_nguoc(1346);
}
