#include <stdio.h>
int main(){
	long long int t,a,b,c,i,j,x[1001],n;
	long long int hasil=0;
	scanf("%lld",&t);
	
	for(i=0; i<t; i++){
		scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
		
		for(j=0; j<n; j++){
			scanf("%lld",&x[j]);
		}
		printf("Case #%lld:", i+1);
		hasil=0;
		
		for(j=0; j<n; j++){
			if((x[j]%a==0 && x[j]%b==0 && x[j]%c==0)||(x[j]%a==0 && x[j]%b!=0)){
				hasil++;
			} 
		}
		
		printf(" %lld\n",hasil);
	}
	return 0;
}
