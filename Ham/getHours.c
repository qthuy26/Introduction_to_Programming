#include <stdio.h>

int getHours(int M){
	int temp, F1 = 1;
	int i, cnt = 0;
	if(M == 1)
		return 1;
	else{
	    for(i = 0; F1 < M; i++){
    		temp = F1*2;
    		F1 = temp;
    		cnt++;
	    }
	}
	return cnt;
}

int main(){
	printf("%d",getHours(65));
}
