#include<stdio.h>
#include<string.h>

void sort(char t[][1001], char na[][1001], long int v[], int n){  //proses sort
    int i,j;
    char temp2[10001];
    for(i=0;i<n-1;i++){ 
        for(j=0;j<n-i-1;j++){
            if(v[j+1]>v[j]){ //descending
                long int temp = v[j];
				v[j] = v[j+1];
				v[j+1] = temp;
				strcpy(temp2, na[j+1]);
				strcpy(na[j+1], na[j]);
				strcpy(na[j], temp2);

				strcpy(temp2, t[j+1]);
				strcpy(t[j+1], t[j]);
				strcpy(t[j], temp2);
            }
            if(v[j+1] == v[j]){  //kalo sama
                if(strcmp(t[j], t[j+1]) > 0){  //ascending
					strcpy(temp2, t[j]);
					strcpy(t[j], t[j+1]);
					strcpy(t[j+1], temp2);

					strcpy(temp2, na[j]);
					strcpy(na[j], na[j+1]);
					strcpy(na[j+1], temp2);
                }
            }
        }
    }
}

int main(){
	FILE *fp = fopen("testdata.in", "r"); //open file
	int n=0;
    int i;
    long int v[101]; //view
    char t[101][1001]; //title
    char na[101][1001]; //name
    
    while(!feof(fp)){
        fscanf(fp, "%[^#]#%[^#]#%ld", t[n], na[n], &v[n]); //scan input
        fgetc(fp);
        n++; //n nambah 
    } 
    
    sort(t, na, v, n); //sort
    for(i=0;i<n;i++){
        printf("%s by %s - %ld\n", t[i], na[i], v[i]); //print hasil
    }
    
    fclose(fp); //close file
    return 0;
}
