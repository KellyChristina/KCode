#include <stdio.h>

int main(){
	int t,n,m,a[21],i,j;
	a[0]=1;
	scanf("%d", &t);
	
	for(i=1; i<20; i++){
		a[i]=a[i-1]*2;
	}
	
	for(j=0; j<t; j++){
		scanf("%d %d",&n,&m);
		n=n-1;
		m=m-1;
		
		int res=0;
			if(n==m){
				res=res+a[i=n];
			}else{
				for(i=n; i<=m; i++){
					res=res+a[i];
				}
			}
			printf("Case #%d: %d\n",j+1,res); 
		}
		
	return 0;
}
