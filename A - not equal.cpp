#include <stdio.h>

int main(){
	long long int a,b,c,d;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	long long int kiri=a*b;
	long long int kanan=c+d;
	
	if(kiri>kanan){
		printf("True\n");
	}else {
		printf("False\n");
	}
	
	return 0;
}
