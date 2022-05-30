#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void bubbleSort(int n, long long int rapi[]){
	for(int i=1 ; i<n ; i++){
		for(int k=n ; k>i ; k--){
//			if(rapi[k]<0)printf("Nega");
			if(rapi[k]<=rapi[k-1]){
//				printf("%d %d\n", rapi[k], rapi[k-1]);
				long long int temp = rapi[k-1];
				rapi[k-1]=rapi[k];
				rapi[k]=temp;
			}
		}
	}
}
void bubbleSort2(int n, long long int rapi[]){
	for(int i=1 ; i<n ; i++){
		for(int k=n ; k>i ; k--){
//			if(rapi[k]<0)printf("Nega");
			if(rapi[k]>rapi[k-1]){
//				printf("%d %d\n", rapi[k], rapi[k-1]);
				long long int temp = rapi[k-1];
				rapi[k-1]=rapi[k];
				rapi[k]=temp;
			}
		}
	}
}

int main(){
	int t,n;
	scanf("%d", &t);
	getchar();
	long long int vektor1[1005];
	long long int vektor2[1005];
	for(int j=1 ; j<=t ;j++){
		scanf("%d", &n); 
		getchar();
	for(int i=1 ; i<=n ; i++){
		scanf("%lld", &vektor1[i]);
	}
	for(int i=1 ; i<=n ; i++){
		scanf("%lld", &vektor2[i]);
	}
	bubbleSort(n,vektor1);
	bubbleSort2(n,vektor2);
	long long int sum=0;
	for(int i=1 ; i<=n ; i++){
		sum+=(vektor1[i]*vektor2[i]);
	}
	printf("Case #%d: %lld\n", j, sum);
	
}
	return 0;
}

