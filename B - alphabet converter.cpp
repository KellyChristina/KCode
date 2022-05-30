#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");  //open file dulu pastinya
	int t,n;
	char s[101],x,y;
	fscanf(fp, "%d\n",&t);  //scanf test case
	
	for(int i=0; i<t; i++){  //scanf string awal
		fscanf(fp, "%s\n",s);
		
		int len=strlen(s);
		fscanf(fp, "%d\n",&n);  //scanf N/proses berapa kali
		
		int a[101]={0};
		int b[101]={0};
		int c[101]={0};
		int z=0;
		
		for(int j=0; j<n; j++){
			fscanf(fp, "%c %c\n",&x,&y);  //scanf yg harus dilakuin
			
			if(a[x-'A']==0){
				b[z]=x;
				c[z]=y;
				z++;
				a[x-'A']=1;
			}
		}
		
		for(int j=0; j<z; j++){
			for(int k=0; k<len; k++){
				if(c[k]==b[j]){
					c[k]=c[j];
				}
			}
		}
		
		int temp[101]={0};
		for(int j=0; j<len; j++){
			++temp[c[j]-'A'];
		}
		
			for(int j=0; j<26; j++){
				if(temp[j]>0){
					printf("%c %d\n",j+'A',temp[j]); //printf hasil
				}
			}
	}
	
	fclose(fp); //close
	return 0;
}
