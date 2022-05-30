#include<stdio.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int t,col,row,temp,temp2;
	fscanf(fp,"%d",&t);
	fgetc(fp);
	
	for(int i=0; i<t; i++){
		int A=0, B=0, C=0, a=100000, b=100000, c=0;
		fscanf(fp,"%d %d", &row,&col);
		fgetc(fp);
		
		char n[501][501];
		for(int j=0; j<row; j++){
			for(int k=0; k<col; k++){
				fscanf(fp, "%c", &n[j][k]);
				if(n[j][k] != '.'){
					if(j>A){
						A=j;
					}
					if(j<a){
						a=j;
					}
					if(k>B){
						B=k;
					}
					if(k<b){
						b=k;
					}
				}
			}
			fgetc(fp);
		}				
		printf("Case #%d:\n",i+1);
		printf("%d %d\n", (A-a)+1, (B-b)+1);
		
		for(int j=a; j<=A; j++){
			for(int k=b; k<=B; k++){
			printf("%c",n[j][k]);
			}
			
			printf("\n");
		}
	}
		fclose(fp);
		return 0;
}
