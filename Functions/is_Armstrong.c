#include <stdio.h>
#include <math.h>

int count(int n){
	int cnt = 0;
	while(n != 0){
		cnt++;
		n/=10;
	}
	return cnt;
}

int is_Armstrong(int n){
	int s = 0, i;
	int cnt = count(n);
	int t = n;
	while(t != 0){
		int a = t % 10;
		s += pow(a, cnt);
		t/=10;
	}
	if(n == s)
		return 1;
	return 0;
}


int main(){
	printf("%d\n", is_Armstrong(1634));
}
