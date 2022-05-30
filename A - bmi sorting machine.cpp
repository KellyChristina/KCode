//Prob.A - BMI Sorting Machine[ID]
//1 kaki = 12 inci, dan 1 inci = 2,54 cm.

#include<stdio.h>
#include<string.h>

struct data{
	char A[25];
	char B[25];
	char C[15];
	char D[15];
	double tinggi;
}orang[1001];

struct data2{
    int x;
}orang2[1001];

int main(){
	int n,m,x,i,j,k,l,temp;
	scanf("%d\n",&n);
	
	struct data baru;
	for(i=0; i<n; i++){
	    scanf("%d,%[^\n]s,%d %d",orang[i].A,orang[i].B,orang[i].C,orang[i].D);
	    getchar();
		orang[i].tinggi=orang[i].B*12*2.54 + orang[i].C*2.54;
	}
	
	for(k=0; k<n; k++){
	    for(l=n; l>k; l--){
	        if(orang[l].tinggi>orang[l-1].tinggi){
	            baru=orang[l];
	            orang[l]=orang[l-1];
	            orang[l-1]=baru;
	        }
	    }
	}
	
	scanf("%d\n",&m);
	for(j=0; j<m; j++){
		scanf("%d\n",&orang2[j].x);
	}
	
	for(j=0; j<n; j++){
	    if(orang[j].tinggi<=orang2[j].x){
	        baru=orang[j].tinggi;
	        orang[j].tinggi=orang2[j].x=baru;
	        orang2[j].x=baru;
	        printf("%d %s %lf\n",orang[j].A,orang[j].B,orang2[j].x);
	    }else{
	        printf("-1\n");
	    }
	}

	return 0;
}

/*
Test case:
5
1,John Doe,4 6
2,Anonymous,5 4
3,Vohu Manah,6 1
4,Dora Hariwini,5 4
5,Kyo,6 7
3
165
130
200
*/
