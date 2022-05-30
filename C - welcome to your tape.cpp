#include<stdio.h>
#include<string.h>

int main(){
	int t,n,k,i,j,l;
	char nama[101][101];
	char sort[101][101];
	char temp[101];
	scanf("%d\n",&t);  //scanf test case
	
	for(i=0; i<t; i++){
		scanf("%d %d\n",&n,&k);  //scanf untuk n/jumlah nama dan k/pilihan angka
	
		for(j=0; j<n; j++){
			scanf("%s\n",nama[i]); //scanf nama2 yang akan diinput (sebelum sort)
			strcpy(sort[i], nama[i]);
		}
		printf("Case #%d: ",i+1);  //prinf test case
		
		for(j=0; j<n-1; j++){  //proses sorting
	        for(l=i+1; l<n; l++){
	            if(strcmp(nama[j],nama[l])>0){
	            	strcpy(temp,nama[j]);
	            	strcpy(nama[l],nama[l]);
	            	strcpy(nama[l],temp);
	            }
	        }
	    }
	    
	    for(j=k; j<n; j++){
	    	printf("%d\n",&sort[j]); //printf hasil yang diminta 
		}
	}
	return 0;
}
