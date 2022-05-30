#include <stdio.h>

int main(){
	long long int n,m,k,i,j,l;
	long long int a[1000001], tot=0;
	long long int x,y;
	scanf("%lld %lld %lld",&n,&m,&k); //scan input untuk bnyk n,m dan kelipatan (k)
	
	for(i=1; i<=n; i++){
		scanf("%lld", &a[i]); //scan input untuk nilai bil bulat n
	}
	
	for(j=1; j<=m; j++){
		scanf("%lld %lld", &x, &y); //scan input untuk nilai kedua bil bulat m
		
		for(l=x; l<=y; l++){   //dari index x ke y jadi udah pasti x<=y
			if(l%k==0){   //kalau habis dibagi k maka akan ditambah dengan nilai a (karena yg diminta index bil bulat)
				tot=tot+a[l]; //kalau ga habis dibagi k maka akan ditambah 0 atau hanya total
			} 
		}
		
		printf("%lld\n", tot); tot=0; //ditaruh total=0 lagi untuk reset nilai
	}
	
	return 0;
}
