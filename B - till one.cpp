#include<stdio.h>

int Formula(int n){
	if(n==1){
		return 1;
	}else if(n%2==0){
		return Formula(n/2);
	}else{
		return Formula(n-1)+Formula(n+1);
	}
}


int main(){
	long long int t,n,i;
	scanf("%lld",&t);
	
	for(i=0; i<t; i++){
		scanf("%lld",&n);
		printf("Case #%lld: %lld\n",i+1,Formula(n));
	}
	
	return 0;
}
