#include<stdio.h>

int main(){
	long long int a,b,c,t,i,j,k;
	double value1, value2;
	double bul1, bul2;
	long long int res1=0, res2=0,selisih=0;
	scanf("%lld",&t);
	
	for(i=0; i<t; i++){
		scanf("%lld %lld %lld",&c, &a, &b);
	}
		printf("Case #%lld: ",i+1);
	
	for(j=0; j<t; j++){
		if(a%4==0){
			value1=a/3;
			bul1= floor(value1);
			res1= a-bul1;
		}else if(a%4!=0){
			res1=a*2;
		}
			
		if(b%3==0){
			value2=b*0.8;
			bul2= floor(value2);
			res2= b-bul2;
		}else if(b%3!=0){
			res2=b*3;
		}
	

			if(c>res1+res2){
				printf("%lld ",j);
			}
	
				if(a>b){
					printf("Red ");
				} else if(b>a){
					printf("Black ");
				} else if(a==b){
					printf("None ");
				}
				
					if(a>b){
						selisih=a-b;
						printf("%lld\n",selisih);
					}else if(b>a){
						selisih=b-a;
						printf("%lld\n",selisih);
					}else if(a==b){
						selisih=a-b;
						printf("%lld\n",selisih);
					}
	}
	
	
	return 0;
}
