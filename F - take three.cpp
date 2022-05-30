#include <stdio.h>
int main(){
    long long int t,n,i,j,k;
    scanf("%lld",&t);
    
    for(i=0; i<t; i++){    
	long long int a[100005]={0}, b;
    long long int x=0, y=0;
        scanf("%lld",&n);
        
        for(int j=0; j<n; j++){
            scanf("%lld",&b);
            a[b]++;
        } 
        printf("Case #%lld: ",i+1);
        
        for(long long int k=0; k<100005; k++){
            if(a[k]>2){
                x=a[k]*(a[k]-1)*(a[k]-2)/(1*2*3);
                y+=x;
            }
        }
        printf("%lld",y);
        printf("\n");
    }
    return 0;
}
