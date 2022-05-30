#include <stdio.h>
int main(){
	long long int a[101][101],t,n,i,j,k;
	long long int hasil=0;
	scanf("%lld",&t);
	
	for(i=0; i<t; i++){
		scanf("%lld",&n);
		
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				scanf("%lld",&a[j][k]);
			}
		}
		printf("Case #%lld: ",i+1);
		
		for(j=0; j<n; j++){
			for(k=0; k<n; k++){
				hasil += a[k][j];
			}
    			printf("%lld",hasil);
    			hasil=0;
    			if(a[k-1][j]!=a[n-1][n-1]){
    				printf(" ");
			}
        }
        printf("\n");
	}
	
	return 0;
}
