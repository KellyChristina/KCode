#include<stdio.h>

struct data2{
    char kode[30];
    char nama[30];
    char gender[10];
    char ayah[30];
    char ibu[30];
    char saudara[30];
};

struct data{
    char kode[30];
    char nama[30];
    char gender[10];
    int banyak;
    struct data2 student[105];
}lec[105];


int main(){
    int n,t,i;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        scanf("%s", &lec[i].kode);
        scanf("%s", &lec[i].nama);
        scanf("%s", &lec[i].gender);
        scanf("%d", &lec[i].banyak);
        for(int j=0; j<lec[i].banyak; j++){
	        scanf("%s", &lec[i].student[j].kode);
	        scanf("%s", &lec[i].student[j].nama);
	        scanf("%s", &lec[i].student[j].gender);
	        scanf("%s", &lec[i].student[j].ayah);
	        scanf("%s", &lec[i].student[j].ibu);
	        scanf("%s", &lec[i].student[j].saudara);
		}
        
    }
    
        scanf("%d", &t);
            printf("Kode Dosen: %s\n", lec[t-1].kode);
            printf("Nama Dosen: %s\n", lec[t-1].nama);
            printf("Gender Dosen: %s\n", lec[t-1].gender);
            printf("Jumlah Mahasiswa: %d\n", lec[t-1].banyak);
            for(int j=0; j<lec[t-1].banyak; j++){
	            printf("Kode Mahasiswa: %s\n", lec[t-1].student[j].kode);
	            printf("Nama Mahasiswa: %s\n", lec[t-1].student[j].nama);
	            printf("Gender Mahasiswa: %s\n", lec[t-1].student[j].gender);
	            printf("Nama Ayah: %s\n", lec[t-1].student[j].ayah);
	            printf("Nama Ibu: %s\n", lec[t-1].student[j].ibu);
	            printf("Jumlah Saudara Kandung: %s\n", lec[t-1].student[j].saudara);
	        }

    return 0;
}
