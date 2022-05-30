#include <stdio.h>
#include <string.h>

struct Stud{  //isi data murid
    char number[105];
    char name[105];
}rec[1005];

int main(){
    FILE *fp = fopen("testdata.in", "r");
    int n,m;
    char temp[105];
    int count=0;
    int i,j,k;
    fscanf(fp,"%d\n",&n);  //scanf banyak data
    
    for(i=0; i<n; i++){
        fscanf(fp,"%s %s\n",rec[i].number, rec[i].name);  //scanf isi data 
    }
    
    fscanf(fp,"%d\n",&m); //scan banyak yg dipanggil
    
	for(i=0; i<m; i++){
		fscanf(fp,"%s\n",temp); //scan inputan nomor yang dipanggil
        
        int count=0;
        for(int j=0; j<n; j++){
            if(strcmp(temp, rec[j].number)==0){
                count=1;
                printf("Case #%d: %s\n", i+1, rec[j].name); 
                break; //biar ga keterusan
            }
        }
        
        if(count==0){  //kalo 0, printf N/A karena gaada nomornya
            printf("Case #%d: N/A\n", i+1);
        }
    }
    
    fclose(fp);
    return 0;
}
