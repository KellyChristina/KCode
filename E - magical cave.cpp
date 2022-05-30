#include <stdio.h>

int main(){
	long long int T,i,j,a,n;
	long long int x=0,hp=0;
	scanf("%lld\n", &T);
	
	for(i=0; i<T; i++){
		scanf("%lld",&n);
		for(j=0; j<n; j++){
			scanf("%lld",&a);
			x+=a;
			if(x+hp<=0){
				hp+=((x+hp)*-1)+1;
			}
		}
		printf("Case #%lld: ", i+1);
		if(hp==0)
			hp++;
					
	printf("%lld\n",hp);x=0,hp=0;
		
	}
		
	return 0;
}
