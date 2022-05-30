#include<stdio.h>
#include<string.h>

int hit(char a[], char b[], int x, int y){
	if((x==0 && y==0) || y==0){
		return 1;
	}else if(x==0){
		return 0;
	}else if(a[x-1]==b[y-1]){
		return hit(a,b,x-1,y-1) + hit(a,b,x-1,y);
	}else{
		return hit(a,b,x-1,y);
	}
	
}

int main(){
	int t,s,k;
	char a[21],b[11];
	scanf("%d", &t);
	
	for(int i=0; i<t; i++){
		scanf("%s", a);
		s=strlen(a);
		
		scanf("%s", b);
		k=strlen(b);
		
		printf("Case #%d: %d\n", i+1, hit(a,b,s,k));
	}
	
	return 0;
}
