#include<stdio.h>

struct info{
	int tgl, bln, thn;
};

struct data{
	int id;
	struct info lahir;
	char nama[11], al[11];
}murid[1001];

int main(){
	int id,n,tampil,query,i,j;
	scanf("%d\n",&n);
	
	for(i=0; i<n; i++){
		scanf("%d\n", &id);
		murid[id].id = id;
		scanf("%d\n", &murid[id].lahir.tgl);
		scanf("%d\n", &murid[id].lahir.bln);
		scanf("%d\n", &murid[id].lahir.thn);
		scanf("%s\n", &murid[id].nama);
		scanf("%s\n", &murid[id].al);
	}
	
	scanf("%d\n",&query);
	
	for(j=0; j<query; j++){
		scanf("%d\n",&tampil);
		if(murid[tampil].id != 0){
			printf("%d. %s was born on %d/%d/%d and live at %s\n",murid[tampil].id, murid[tampil].nama, murid[tampil].lahir.tgl, murid[tampil].lahir.bln, murid[tampil].lahir.thn, murid[tampil].al);
		}else{
			printf("No data found!\n");
		}
	}

	
	return 0;
}
