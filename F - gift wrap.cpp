#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,c,r;
	scanf("%lf %lf %lf",&c,&b,&a);
	r= sqrt(a*a+b*b+c*c)/2;
	printf("%.2lf\n",((r*r)*4)*3.14159265359);
	
	return 0;
}
