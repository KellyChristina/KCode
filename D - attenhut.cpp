#include <stdio.h>
int main(){
	long long int n,a[100001],i,j;
	long long int tot=0;
	scanf("%lld",&n);
	
	for(i=0; i<n; i++){
		scanf("%lld",&a[i]);
	}
	
	for(i=0; i<n; i++){
		if(a[i]==a[i+1]){
			continue;
		}
		if(a[i]!=a[i+1]){
			tot++;
		}
	}
	
	printf("%lld\n", tot);

	return 0;
}
