#include<stdio.h>
#include<string.h>

int main(){
	int t,i,j,res=0,temp=0;
	char a[101];
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		gets(a);
		
		for(j=0; j<strlen(a); j++){
			if(strlen(a)>3){
			temp = res;
			res[a] = res[a-2];
			res[a-2] = temp;
			} 
		
		}
		printf("Case #%d: %d\n",i+1,res);
	}
	
	
	return 0;
}
