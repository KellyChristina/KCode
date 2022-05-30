#include <stdio.h>
int main(){
	int a[1001],b[1001],n,i,j,k;
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	for(j=0; j<n; j++){
		scanf("%d",&b[a[j]]);
		}

	
	for(k=0; k<n; k++){
		if(k==n-1){
			printf("%d",b[k]);
		}else{
			printf("%d ",b[k]);
		}
	}
		printf("\n");
		
	return 0;
}
