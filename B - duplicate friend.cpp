#include<stdio.h>
#include<string.h>

int main(){
	int n,i,j;
	int a=0;
	char text[1001][1001];
	scanf("%d\n",&n);
	
	for(i=0; i<n; i++){
		scanf("%s\n",text[i]);
		
		int b=0;
		for(j=0; j<i; j++){
			if(strcmp(text[i],text[j])==0){
				b++;
			}
		}	
			if(b==1){
				a++;
			}	
	}
	
	printf("You have %d duplicate name(s).\n",a);
	
	return 0;
}
