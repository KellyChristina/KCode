#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c,d,e,f,g,h,i,j,k,l;
	double total=0 ,res1=0 ,res2=0 ,res3=0;
	double value1,value2;
	scanf("%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	total = a+b+c+d+e+f+g+h+i+j+k+l;
	value1 = 0.07*total;
	value2 = 0.05*total;
	res1= floor(value1);
	res2= floor(value2);
	res3=total-res1-res2;
    printf("%.2lf, %.2lf, %.2lf\n", res1,res2,res3);
    
    return 0;
}
