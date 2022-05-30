#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long int ll;
void bubbleSort(int n, ll x[]){  //proses sort
	for(int i=1 ; i<n ; i++){
		for(int k=n ; k>i ; k--){
			if(x[k]<=x[k-1]){
				ll temp=x[k-1];
				x[k-1]=x[k];
				x[k]=temp;
			}
		}
	}
}

int main(){
	int t,n,count;
	ll a[1001];
	ll x[1001];
	ll b[1001];
	scanf("%d\n", &t);
	for(int i=1 ; i<=t ; i++){
		scanf("%d\n", &n);
		for(int j=1 ; j<=n ; j++){
			scanf("%lld\n", &a[j]);
			x[j]=a[j];
		}
		
		count=1;
		bubbleSort(n,x);
		b[1]=x[1];
		for(int j=2 ; j<=n ; j++){
			if(x[j]!=x[j-1]){
				b[count+1]=x[j];
				count++;
			}
		}
		printf("Case #%d: ", i); //print test case
		
		for(int j=1 ; j<=n ; j++){
			for(int u=1 ; u<=count ; u++){
				if(a[j]==b[u]){ //kalo sama di print
					if(j==n){ //kalo sama di print
						printf("%d", u);
					}else{
						printf("%d ", u);
					}
				}
			}
		}
		printf("\n");
		
	}
	return 0;
}

