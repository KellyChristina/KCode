#include <stdio.h>

int main(){
	long long int n,k,i,j,l;
	long long int damage=0;
	scanf("%lld %lld",&n,&k); //inputan N dan K (K itu banyak bola api yang dapat digunakan/ seperti peluru)
	
	long long int a[1001],x=0; //untuk memastikan kalau x=0;
	for(i=1; i<=n; i++){
		scanf("%lld",&a[i]); //inputan ukuran N
	}
	
	for(j=k; j<=n; j++){ //k sudah pasti akan lbh kecil dari n 
		damage=0;  //untuk memastikan kalau damage awal 0 
		for(l=0; l<k; l++){ 
			damage += a[j-l]; //menambah sampai akhir k
		}
		
		if(damage>x){ 
			x=damage;
		}
	}
	
	printf("%lld\n",x); 
	x=0; //reset nilai
		
	return 0;
}
