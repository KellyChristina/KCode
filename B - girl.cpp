#include <stdio.h>
#include <string.h>

int main(){
	int t,i,j,k,tot;
	char a[100005];
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%s",a);
		
		
	for(j=0; j<strlen(a); j++){
		bool muncul = false;
		
		for(k=0; k<j; k++){
			if(a[j]==a[k]){
				muncul = true;
				break;
			}
		}
		if(!muncul){
			tot++;
		}
	}

		printf("Case #%d: ",i+1);
		if(tot%2==0 && tot!=0){
			printf("Yay\n");
		}else{
			printf("Ewwww\n");
		}
		tot=0;
	}
	
	return 0;
}
