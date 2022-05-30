#include <stdio.h>

struct a{
	char data[11];
	int kel;
};

struct b{
	int hit=0;		
}; 

int main(){
	int t,i,j,k,l;
	int n=0;
	scanf("%d", &t);
	
	for(i=1; i<=t; i++){
		scanf("%d", &n);
		
		struct a murid[n+1];
		struct b kelompok[21];
		
		for(j=1; j<=n; j++){
			scanf("%s %d", murid[j].data, &murid[j].kel);
			kelompok[murid[j].kel].hit++;
		}
		
	    printf("Case #%d:\n", i);
		
    		for(k=1; k<=20; k++){
    			if(kelompok[k].hit>0){
    				printf("Group %d(%d):\n", k, kelompok[k].hit);
    				
        				for(l=1; l<=n; l++){
        					if(murid[l].kel==k){
        					   printf("%s\n", murid[l].data); 
        					} 
        				}
    			}
    		}
	}
	
	return 0;
}
