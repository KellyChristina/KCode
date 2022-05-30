#include <stdio.h>

int main(){
    char a[100001];
    int t,i,j,k;
    int tot;
    scanf("%d",&t);
    
    for(i=1; i<=t; i++){
    	getchar();
        scanf("%[^\n]",&a);
        
        int alpabet[26]={0};
        tot=0;
        for(j=0; a[j]!='\0'; j++){
            if('a'<=a[j] && a[j]<='z'){
                tot+=!alpabet[a[j]-'a'];
                alpabet[a[j]-'a']=1;
            }
    	}
    	
		if(tot==26){
			printf("Case #%d: YES\n",i);	
		}else{
			printf("Case #%d: NO\n",i);
		}
	}
	
	return 0;
}
