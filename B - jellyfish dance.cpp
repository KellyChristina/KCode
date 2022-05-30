#include <stdio.h>
int main(){
	int a[101],t,n,x[101],y[101],i,j,k;
	int hasil=0;
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	scanf("%d",&t);
	for(j=0; j<t; j++){
		scanf("%d %d",&x[j],&y[j]);	
	}
	
	for(j=0; j<t; j++){
		if(x[j]==y[j]){
			hasil=a[x[j]-1];
		} else if(x[j]!=y[j]){
			for(k=x[j]-1; k<y[j]; k++){
				hasil +=a[k];
			}
		}
		printf("Case #%d: %d\n",j+1, hasil); hasil=0;
	} 
	
	return 0;
}
