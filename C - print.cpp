#include<stdio.h>

int p(int now,int max,int n,int used[]){ 
	if(n==0){
		printf("%d\n",now);
	}else{
		for(int i=1; i<=max; i++){
			if(!used[i]){
				used[i]=1;
				p(now*10+i, max, n-1, used); used[i]=0;
			}
		}
	}
}

int main(){
	int t,n,i;
	int used[11]={0}; //0 karena belom dipake n nya
	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		scanf("%d",&n);
		printf("Case #%d:\n",i+1);
		p(0,n,n,used);
	}
	
	return 0;
}
