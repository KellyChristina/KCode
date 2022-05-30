#include<stdio.h>
#include<string.h>

int main(){
	FILE *fp = fopen("testdata.in", "r");
	int n, temp;
	int number[1005];
	char name[1005][1005];
	char sort[1005];
	fscanf(fp,"%d\n",&n);  //scanf jumlah tanaman
	
	for(int i=0; i<n; i++){
			fscanf(fp,"%d#%[^\n]\n",&number[i],&name[i]);  //scanf isi data sebelum sort
	}
	
	for(int i=0; i<n; i++){  	//proses sorting
	    for(int j=i+1; j<n; j++){
	        if(strcmp(name[i],name[j])>0){
	            strcpy(sort,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],sort);
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
	        }
	    }
	}
	
	for(int i=0;i<n;i++){
			printf("%d %s\n",number[i],name[i]);  //print hasilnya yang sudah diganti 
	}
	
	fclose(fp);
	return 0;
}
