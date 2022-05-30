#include<stdio.h>

int main(){
	long long int t,n,i,j,k,temp;
	scanf("%lld", &t);
	
 	for (i=0; i<t; i++){
	 	long long int a[100001];
  		scanf("%lld", &n);
  		
  		for (j=0; j<n; j++){
   			scanf("%lld", &a[j]);
  		}
  		printf("Case #%lld:", i+1);
  		
  		temp=a[0];
  		for(j=1; j<n; j++){
  			a[j-1]=a[j];
		}
		
		for(k=0; k<n; k++){		
			a[n-1]=temp;
  			printf(" %lld",a[k]);
		}
		printf("\n");
	}
	
  return 0;
}
