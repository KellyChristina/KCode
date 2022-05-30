#include <stdio.h>

int main(){
	double a,b,c,d,a1,b1,c1,d1;
	scanf("%lf %lf\n",&a,&a1);
	scanf("%lf %lf\n",&b,&b1);
	scanf("%lf %lf\n",&c,&c1);
	scanf("%lf %lf",&d,&d1);
	
	double h1= (a1*100)/(100-a);
	double h2= (b1*100)/(100-b);
	double h3= (c1*100)/(100-c);
	double h4= (d1*100)/(100-d);
	
	printf("$%.2lf\n",h1);
	printf("$%.2lf\n",h2);
	printf("$%.2lf\n",h3);
	printf("$%.2lf\n",h4);
		
	return 0;
}
