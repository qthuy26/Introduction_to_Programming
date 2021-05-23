#include <stdio.h>

int F(int n){
	int F3, F1 = 1, F2 = 1;
	if(n==0 || n == 1)
	    return F1;
	else{
    	int i;
    	for(i = 2; i <= n; i++){
    		F3 = F1 + F2;
    		F1 = F2;
    		F2 = F3;
    	}
	}
	return F3;
}



int main(){
	int i;
	for(i=0;i<=40;i++)
    	printf("%d ",F(i));
}
