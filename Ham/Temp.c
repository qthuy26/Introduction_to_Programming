#include <stdio.h>

int tong(int n){
	int i, s = 0;
	for(i = 1; i <= n; i++)
		s += 3;
	return s;
}

int main(){
    int n, s;
    scanf("%d", &n);
    s = tong(n);
    printf("%d", s);
}
