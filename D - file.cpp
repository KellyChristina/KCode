#include <stdio.h>
#include <string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r"); //open

	int t,n;
	char s[205];
	char a[201][201];
	char b[201][201];
	char temp[205];
	fscanf(fp, "%d\n",&n); //scanf banyak text
	
	for(int i=0; i<n; i++){
		fscanf(fp,"%[^#]#%[^\n]\n",a[i],b[i]); //scanf text
	}
	
	fscanf(fp, "%d\n", &t); //scanf testcase
	
	for(int i=1; i<=t; i++){
		fscanf(fp, "%[^\n]\n",s); //scanf text yang udah di terjemahin
		printf("Case #%d:\n",i); //print case

			for(int j=0; s[j]!='\0'; j++){
				if(s[j]==' '){ 
					printf(" "); 
					continue;
				}
	
					for(int k=j,l=0; s[k]!=' '&&s[k]!='\0'; k++){
						temp[l++]=s[k];
						j=k;
					}
		
						int x=0;
						for(int k=0; k<n; k++){
							if(strcmp(temp,a[k])==0){
								printf("%s",b[k]);
								x=1;
								break;
							}
						}
			
							if(x==0){ 
								printf("%s",temp); 
							}
			}
		printf("\n"); //newline
	}
    	fclose(fp); //close
    	return 0;
}
