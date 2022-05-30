#include <stdio.h>

int main(){
	int n,y[10001],i,j,k;
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		scanf("%d",&y[i]);
	}
	
	for(j=1; j<=n; j++){
		for(k=1; k<=9; k++){
			if(k!=y[j]){
				printf(".");
			}else{
				printf("#");
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
