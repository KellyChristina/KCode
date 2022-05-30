#include <stdio.h>

int main(){
	long long int a,b,c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long int hasil=a*b+c;
	long long int angka=(hasil/10)%10;
	printf("%lld\n", angka);
	return 0;
}
