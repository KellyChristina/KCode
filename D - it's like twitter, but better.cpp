#include <stdio.h>
#include <string.h>

int main(){
	int t,n,count=1,i,j; //count 1 supaya kata sebelum syarat/kondisi di if bisa kehitung 
	char a[101];
	scanf("%d",&t);  //scan testcase
	
	for(i=1; i<=t; i++){  
		scanf("%d\n",&n);    //input untuk jumlah karakter
		gets(a);   //input pesan
	
	 
		for(j=0; a[j]!='\0'; j++){   //biar loop lanjut terus sampai ketemu null terminator(\0)
			if(a[j] == ' ' && a[j+1] != ' '){   //kalau ada spasi & huruf selanjutnya gaada spasi = satu kata 
			count++; //jumlah kata nambah
			}
		}

		printf("Case #%d: %d\n",i,count); count=1; //count=1 lagi untuk reset nilai
		
	}
	
	return 0;
}
