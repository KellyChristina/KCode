#include<stdio.h>
int main(){
	long long int n,k,a[100001],i;
	int x=0;
	scanf("%lld %lld",&n,&k);
 
 	for(i=0; i<n; i++){
  		scanf("%lld",&a[i]);
 	}
 	
	for(i=0; i<n; i++){
		if(a[i]%k==0)
			x++;
	}
	printf("%lld\n",x);

	return 0;
}
