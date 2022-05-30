#include<stdio.h>

int main(){
	int n,x,q,height,sort;
	int counter = 1;
	int a[200005];
	scanf("%d\n", &n); //scan banyak murid
	
	for(int i=0; i<200005; i++){
		a[i]=-1; //-1 kalo tinggi yg dipanggil gaada orangnya
	}
	
	for(int i=0; i<n; i++){
		scanf("%d\n", &height); //scan tinggi murid
		a[height] = 0;
	}
	
	for(int i=0; i<200005; i++){
		if(a[i]==0){
			a[i]=counter;
			counter++;
		}
	}
	
	scanf("%d\n", &q); //scan banyak yg dipanggil

	for(int j=0; j<q; j++){
		scanf("%d", &sort); //scan inputan tinggi yang dipanggil
		printf("%d\n", a[sort]); //printf hasil
	}
	
	return 0;
}
