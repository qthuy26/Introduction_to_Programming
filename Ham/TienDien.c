#include <stdio.h>

void TienDien(){
    int sc, sm, ki, tien;	
	scanf("%d%d", &sc, &sm);
	ki = sm - sc;
    if(ki <= 50)
        tien = ki * 1549;
    else if(ki <= 100)
        tien = 50*1549 + (ki-50)*1600;
    else if(ki <= 200)
        tien = 50*1549 + 50*1600 + (ki - 100)*1858;
    else if(ki <= 300)
        tien = 50*1549 + 50*1600 + 100*1858 + (ki - 200)*2340;
    else if(ki <= 400)
        tien = 50*1549 + 50*1600 + 100*1858 + 100*2340 + (ki - 300)*2615;
    else
        tien = 50*1549 + 50*1600 + 100*1858 + 100*2340 + 100*2615 + (ki - 400)*2701;
    printf("%d Kwh: %d VND", ki, tien);
}

int main(){
    TienDien();
}
