#include<stdio.h>

typedef long long int ll;
int main(){
	FILE *fp = fopen("testdata.in", "r");
	int t;
	ll n;
	
	fscanf(fp, "%d\n", &t);
	
	for(int i=1; i<=t; i++){
        fscanf(fp, "%lld\n", &n);
        
		ll a[10001]={0}; 
		ll b[10001]={0};
		ll tambah=0;
        for(int j=0; j<n; j++){
            fscanf(fp, "%lld", &a[j]);
            tambah+=a[j];
			b[j]=2+(a[j]*2);
        }
        
        ll luas=tambah*4;
        ll perim=0;
        
        if(n==1){
            perim=b[0];
        }else{
            if(a[0]<a[1]){
                perim=b[0]-a[0];
            }else {
            	perim=b[0]-a[1];
            }

            for(int j=1; j<n-1; j++){
                if(a[j]<a[j-1]){
                	perim+=b[j]-a[j];
                }else{
                	perim+=b[j]-a[j-1];
                }
                
                if(a[j]<a[j+1]){
                	perim-=a[j];
                }else{
                	perim-=a[j+1];
                }
            }
            
            if(a[n-1]<a[n-2]){
            	perim+=b[n-1]-a[n-1];
            }else{
            	perim+=b[n-1]-a[n-2];
            }
        }

        	printf("Case #%d: %lld %lld\n", i, perim*2, luas);

    }
    
    fclose(fp);
    return 0;
}
