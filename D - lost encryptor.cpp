//Prob D - Lost Encryptor

#include<stdio.h>
#include<string.h>		//karena ada huruf panjang jadi pake string

int main(){
	int n,i,j;
	char s[26];			//karena huruf/karakter jadi char bukan int
	char t[26];
	scanf("%d",&n); getchar();		//scanf n/banyak huruf
	scanf("%[^\n]",&s); getchar();	//scanf satu kata sebelum di enkripsi
    scanf("%[^\n]",&t); getchar();	//scanf satu kata sesudah di enkripsi
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(s[i]==t[j]){			//kalau kata sebelum dienkripsi=kata sesudah di enkripsi
				printf("%d", j+1);	//maka print angkanya (pake j karena j itu menunjukkan angka dari si t/yg sudah di enkripsi)
				if(i!=n-1){			//pake gini biar dia ada " " (spasi) sampe huruf ke-6/1 huruf sebelum n
				    printf(" ");
				}
			}
		}
	}
	   printf("\n");	//pake \n sebagai penutup
	
	return 0;
}

/*
test case
7
nuclear
leracun
*/
