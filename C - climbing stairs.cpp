#include <stdio.h>

int main(){
int a[1000],n,i;
	scanf("%d",&n);
 
 	for(i=0; i<n; i++){
  		scanf("%d",&a[i]);
 	}
 
	for (i=0; i<n; i++){
  		if(a[i]>=a[i+1]||i+1==n){
  			printf("%d",a[i]);
  			if(i+1!=n){
  				printf(" ");
			}
		}
	}
	
 	printf("\n");
 
 	return 0;
}
