#include <stdio.h>
#include <time.h>

int main(){
	struct tm ts;
    time_t now;
    int year;
    
    now = time(0);          
    ts = *localtime(&now);    
    year = ts.tm_year + 1900; 
	int ngay, thang , ns, tuoi;
	scanf("%d%d%d", &ngay, &thang, &ns);
	tuoi = year - ns;
	printf("Ban sinh ngay %02d thang %02d nam %d. Nam nay, ban %d tuoi.", ngay, thang, ns, tuoi);
}
