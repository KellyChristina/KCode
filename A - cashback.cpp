#include <stdio.h>
int main(){
	int t,a,b,i;
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d:",i+1);
		
	if(a>b){
		printf(" Go-Jo\n");
	} else {
		printf(" Bi-Pay\n");
	}
}
	return 0;
}
