#include <stdio.h>

int main(){
	unsigned long long int t,n,k;
	int i,j;
	scanf("%llu",&t);
		
	for(i=1; i<=t; i++){
		scanf("%llu %llu",&n,&k);
		
		unsigned long long int a[n];
		for(j=1; j<=n; j++){
			scanf("%llu",&a[j]);
		}
		
		unsigned long long int sum=0, sum1=0, tot=0;
		for(j=1; j<=n; j++){
			if(j%k==0){
				sum+=a[j];
			}else{
				sum1+=a[j];
			}
		}
		
		if(sum>sum1){
			tot=sum-sum1;	
		}else if(sum1>sum){
			tot=sum1-sum;
		}
		
		printf("Case #%d: %llu\n",i,tot);
	}
	
	
}
