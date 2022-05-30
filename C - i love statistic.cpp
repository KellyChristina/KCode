#include<stdio.h>

void swap(int* a, int* b){ 
    int t = *a; 
    *a = *b; 
    *b = t; 
}

int main(){
    int n, t, i, j, a[t];
    double mean=0, median=0;
    scanf("%d\n", &n);
    for(i=0;i<n;i++){
        scanf("%d\n", &t);
        
        for(j=0;j<t;j++){
            scanf("%d\n", &a[j]);
            mean+=a[j];
        }
        sortc(a, t);
        if(t%2==0){
            median=(a[(t/2)-1]+a[(t/2)])/2.0;
        }
        else{
            median=a[(t/2)];
        }
        printf("Case #%d:\n", i+1);
        printf("Mean : %.2lf\n", mean/t);
        printf("Median : %.2lf\n", median);
        mean=0; median=0;
    }
    return 0;
}
