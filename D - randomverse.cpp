#include <stdio.h>

int main(){
	long long int t,n,a[100001],i,j,k;
	scanf("%lld",&t);
	
	for(i=1; i<=t; i++){
		scanf("%lld",&n);
		
		for(j=1; j<=n; j++){
			scanf("%lld",&a[j]);
		}
		printf("Case #%lld:",i);
		
		for(k=n; k>0; k--){
			printf(" %lld %lld", a[k-1], a[k]);
			k--;
		}
		printf("\n");
	}
	
	return 0;
}
