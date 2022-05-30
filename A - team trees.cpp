#include <stdio.h>

int main(){
	int t,n,i,j;
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%d",&n);
		printf("Case #%d: ",i+1);
		
		int a[n];
		int res=0;
		for(j=0; j<n; j++){
			scanf("%d",&a[j]);
			res+=a[j];
		}
		printf("%d\n",res);
		res=0;
	}
	
	return 0;
}
