#include <stdio.h>

int main(){
	double a,m,f;
	scanf("%lf %lf %lf", &a, &m, &f);
	
	double h1=(a*0.2);
	double h2=(m*0.3);
	double h3=(f*0.5);
	double hasil=h1+h2+h3;
	
	printf("%.2lf\n", hasil);

	return 0;
}
