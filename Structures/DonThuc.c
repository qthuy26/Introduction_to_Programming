#include <stdio.h>

struct DonThuc{
	float he_so;
	int bac;
};

void InDonThuc(struct DonThuc d){
	printf("%.2fx^%d", d.he_so, d.bac);
}

int main(){
	struct DonThuc d = {1.5, 5};
	InDonThuc(d); 
}
