#include<stdlib.h>
#include<stdio.h>

int main(){
    int n,m,max1,max2;
    int a[101];
    int b[101];
    scanf("%d %d\n",&n,&m);  //scanf jumlah angka dan pengurang

    for(int i=1; i<=n; i++){  //scanf isi angka
        scanf("%d",&a[i]);
        getchar();
    }
     
    for(int i=1; i<=m; i++){  //scanf pengurang
        scanf("%d",&b[i]);
        getchar();
    }
    
    for(int i=1; i<=m; i++){  
        for(int j=1; j<=n; j++){
            if(b[i]==a[j]){  //kalo sama max1=j
                max1=j;
    
	            for(int k=max1; k<n-1; k++){  
	                a[k]=a[k+1]; //n semakin berkurang = angka pertama dan kedua sama
	            } 
	            
                j=0; //j=0 == max1=0
                n--; //n semakin berkurang
            }
        }
    }
    
    if(n==0){  //kalo n=0 printf jawaban
        printf("Maximum number is -1\n");  //printf jawaban1
    }else{
        max2=a[0];
        for(int i=1; i<n; i++){
            if(a[i]>max2){	//kalo a[i]/isi angka lbh besar dari max2, max2=a[i]
                max2=a[i];  
            }
        }
        printf("Maximum number is %d\n",max2);  //printf jawaban2
    }
    
    return 0;
}
