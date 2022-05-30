#include <stdio.h>

int main(){
	int T;
	double A,B,C,D,E,F;
	scanf("%d\n",&T);
	scanf("%lf %lf\n",&A,&B);
	scanf("%lf %lf\n",&C,&D);
	scanf("%lf %lf",&E,&F);
	
	printf("%.2lf\n", A*B/360);
	printf("%.2lf\n", C*D/360);
	printf("%.2lf\n", E*F/360);
	
	return 0;
}
