#include <stdio.h>

int main(){
	long long int a[101],n,x,y,i;
	long long int odd=0,even=0;
	long long int total;
		scanf("%lld %lld %lld",&n,&x,&y);
 
	for(i=0; i<n; i++){
		scanf("%lld",&a[i]);
		}

	for(i=0; i<n; i++){
		if(a[i]%2==0){
			even=even+a[i]*y;
			
		}else{
			odd=odd+a[i]*x;
			}
	}
	total=even+odd;
	printf("%lld\n",total);
		
	return 0;
}
