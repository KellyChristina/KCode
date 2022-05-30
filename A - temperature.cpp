#include <stdio.h>
#include <string.h>

void swap(float* a, float* b) 
{ 
    float t = *a; 
    *a = *b; 
    *b = t; 
}

void stringSwap(char a[], char b[]){
	char temp[1001];
	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}

void charSwap(char *a, char *b){
	char temp = *a;
	*a =  *b;
	*b = temp;
}

int main(){
	FILE *fp = fopen("testdata.in", "r"); //open

	int i,j,k,m;
	float b[101]; // temprture ori
	float d[101]; // temprture cpy
	char a[101][1001];
	char c[101];
	
	int n=0;
	while(!feof(fp)){
		fscanf(fp,"%[^#]#%f#%c\n",&a[n],&b[n],&c[n]); //scanf text/input
		d[n]=b[n];
		n++;
	}
	
	for(m=0; m<n; m++){
		if(c[m]=='F'){
			d[m]=(float)(d[m]-32)*5/9;		// proses temprture cpy
		}
	}

	for(j=0; j<n-1; j++){  //proses sorting
        for(k=0; k<n-1; k++){
             if(d[k]>d[k+1]){
             	swap(&d[k], &d[k+1]);		// urut temperture yg udh diolah
             	swap(&b[k], &b[k+1]);		// urut temprture ori
             	stringSwap(a[k], a[k+1]);	// urut nama kota
             	charSwap(&c[k], &c[k+1]);	// urut satuan temprture
            }
            if(d[k] == d[k+1]){	// Kalo temperatur sama,
            	if(strcmp(a[k], a[k+1]) > 0){		// Urut nama kota
            		stringSwap(a[k], a[k+1]);
				}
			}
        }
    }
	
	for(i=0; i<n; i++){
        printf("%s is %.2f%c\n",a[i],b[i],c[i]); //printf jawaban
	}
            
	fclose(fp); //close
	return 0;
}
