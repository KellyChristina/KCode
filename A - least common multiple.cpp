#include<stdio.h>

long long int GCD(long long int a,long long int b){
	if (a==0)
        return b; 
   		return GCD(b%a, a); 
}

long long int LCM(long long int a[], long long int n){
	long long int res=a[0];
	
	for(int i=1; i<n; i++){
		res=(((a[i]*res))/(GCD(a[i],res))); 
	}
	return res;
}

int main(){
    long long int a[101],t,n;
    int j,k;
    scanf("%lld",&t);
    
    for(j=0; j<t; j++){
        scanf("%lld",&n);
        
        for(k=0; k<n; k++){
			scanf("%lld",&a[k]);
		}
    		
			printf("Case #%lld: %lld\n",j+1,LCM(a,n));
    }
    
    return 0; 
}
