#include <stdio.h>

int main(){
	double L,B,H;
	scanf("%lf %lf %lf",&L,&B,&H);
	double keliling =L*B;
	double luas = B*H/2;
	double hasil = (2*luas)+(3*keliling);
	printf("%.3lf\n",hasil);

	return 0;
}
