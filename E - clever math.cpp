#include <stdio.h>

int angka(long long int x, long long int y){
	long long int kali=1, hasil=0, nambah=0;
	while(x||y){
		nambah=(x%10)+(y%10);
		nambah%=10;
		
		hasil=(nambah*kali)+hasil;
		x/=10;
		y/=10;
		
		kali*=10;
	}
	return hasil;
}


int main(){
	long long int t, x, y, i;
	scanf("%lld",&t);
	
	for(i=1; i<=t; i++){
		scanf("%lld %lld", &x, &y);
		printf("Case #%lld: %lld\n",i,angka(x,y));
	}
	
}
