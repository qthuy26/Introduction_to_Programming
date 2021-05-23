#include <stdio.h>

int main(){
	int s;
	scanf("%d", &s);
	int d, hh, mm, ss;
	d = s / (3600*24);
	s = s - d*(3600*24);
	hh = s/3600;
	s = s - hh*3600;
	mm = s/60;
	s = s - mm*60;
	ss = s;
	if(d == 0){
		printf("%02d:%02d:%02d", hh, mm, ss);
	}
	else{
		printf("%d days %02d:%02d:%02d", d, hh, mm, ss);
	}
	return 0;
}
