#include<stdio.h>

int main(){
	long long int t,n,count;
	scanf("%lld",&t);
	
	for(int i=0; i<t; i++){
		scanf("%lld",&n);
		printf("Case #%lld: ",i+1);
		
		if(n==1){
			printf("Lili\n");
		}else{
			while(n!=1){
				if(n%2==0){
					n=n/2;
				}else{
					n=(3*n)+1;
				}
					count++;
			}
			
			if(count%2==0){
		    	printf("Jojo\n");
			}else{
		    	printf("Lili\n");
		   	}
		   		count=1;
		}
	}
	
	return 0;
}
