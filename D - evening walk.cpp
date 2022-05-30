#include<stdio.h>

int main(){
	int baris, kolom;	
	char n[25][25];
	scanf("%d %d", &baris, &kolom);
	
	int count=0;
	for(int i=0; i<baris; i++){
		for(int j = 0; j<kolom; j++){
			scanf("%c", &n[i][j]);
    			if(n[i][j]=='.'){
    				count++;
    			}
		}
	}
	    printf("%d\n",count+1); count=0;
	    return 0;
}
