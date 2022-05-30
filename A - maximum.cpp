#include <stdio.h>

int main(){
	int a[10001],t,n,i,j,k;
	int max1,max2,hasil;
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%d",&n);
		
		for(j=0; j<n; j++){
			scanf("%d",&a[j]);
		}
		printf("Case #%d: ",i+1);
		
			max1=a[1],max2=a[1];
			hasil=0;
			for(k=0; k<n; k++){
				if(a[k]>=max1){
					max2=max1;
					max1=a[k];
				} else if(a[k]>=max2 && a[k]<=max1){
					max2=a[k];
				}	
			}
		hasil=max1+max2;
		printf("%d\n",hasil);
	}
	
	return 0;
}
