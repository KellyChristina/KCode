#include <stdio.h>

int main(){
	long long int a,b,c,d;
	long long int hasil=0;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(a*b == c-d){
			printf("True\n");
		} else if(a*b != c-d){
			printf("False\n");
		}
	
	return 0;
}
