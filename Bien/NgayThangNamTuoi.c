#include <stdio.h>

int main(){
	int ngay, thang , ns, namht, tuoi;
	scanf("%d%d%d%d", &ngay, &thang, &ns, &namht);
	tuoi = namht - ns;
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", ngay, thang, ns, tuoi);
}
