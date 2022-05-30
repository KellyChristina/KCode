#include <stdio.h>

int main(){
	long long int t,i,k,x,y,z,a=0,l,r,tot;
	
	scanf("%lld",&t);
	for (i=0; i<t; i++){
		scanf("%lld %lld %lld %lld %lld",&x,&y,&z,&l,&r);
		
		k=x;
		while(k%y!=0 || k%z!=0){
			k= k+x;
		}
		a=k;
		tot=0;
		while(a>=l && a<=r){
			if(a>=l){
				tot=tot+a;
			}
			a=a+k;
		}
		printf("Case #%lld: %lld\n",i+1,tot);
	}

	return 0;
}
