#include <stdio.h>

int main(){
	long long int row,col,j,k,l,tot[10000]={0};
	scanf("%lld %lld",&row, &col);
	long long int a[101][101];
	long long int res=1;

	for(j=0; j<row ; j++){
		for(k=0; k<col; k++){
			scanf("%lld", &a[j][k]);
		}
	}
        
	for(j=0; j<col ; j++){
    for(k=0; k<row; k++){
        tot[j] += a[k][j];
        tot[j] %= 1000000007;
    }
}

	for(l=0; l<col; l++){
		res *= tot[l];
		res %= 1000000007;
	}
	
	printf("%lld\n",res);
	
	return 0;
}
