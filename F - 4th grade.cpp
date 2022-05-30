#include <stdio.h>
#include <math.h>

int main(){
	int t,a,b,i,j;
	scanf("%d\n", &t);
	
	for(i=0; i<t; i++){
		scanf("%d",&a);
		printf("Case #%d:",i+1);
		
		for(j=2; j<=sqrt(a);j++){
			if(a%j == 0){
				b=0;
				while(a%j==0){
				a=a/j;
				b++;
				}
		
			printf(" %d ^ %d",j,b);
				if(a==1){
					printf("\n");
				}else{
					printf(" *");
				}
			}
		}
			
		if(a!=1){
		printf(" %d ^ %d\n",a,1);
		}
	}
	
	return 0;
	
}
