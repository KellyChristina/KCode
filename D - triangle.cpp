#include <stdio.h>

int main(){
	int t, a[101],i,j,k,l;
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<t; i++){
		printf("Case #%d:\n",i+1);
		
		for(j=1; j<=a[i]; j++){
			for(k=a[i]; k>j; k--){
				printf(" ");
			}
			
				if(a[i]%2==0){
					for(l=1; l<=j; l++){
						if(l%2!=0){
							printf("#");
						} else {
							printf("*");
						}
					}
				} else {
					for(l=1; l<=j; l++){
						if(l%2!=0){
							printf("*");
						} else {
							printf("#");
						}
					}
				}
				
			printf("\n");
		}	
			
	}
	
	return 0;
}
