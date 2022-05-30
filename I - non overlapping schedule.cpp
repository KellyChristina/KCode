#include <stdio.h>
 
int main(){
	long long int t,n,i,j;
	static long long int a[100], b[100000],c[100000];
    scanf("%lld",&t);

    for(i=1; i<=t; i++){
		scanf("%lld",&n);

    	for(j=1; j<=n; j++){
			scanf("%lld %lld",&b[j],&c[j]);
    	}

    	a[i]=0;
        for(j=1; j<=n; j++){
			if(b[j] >= c[j-1] && c[j] <= b[j+1]){
				a[i] = a[i]+1;
            }
        }

        if(b[n] >= c[n-1]){
			a[i] = a[i]+1;
		}   
    }

    for(i=1; i<=t; i++){
		printf("Case #%lld: %lld\n",i,a[i]);
	}
	
     return 0;

 }
