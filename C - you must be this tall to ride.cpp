//Prob C - You Must Be This Tall to Ride

#include<stdio.h>

typedef long long int ll;
int main(){
	ll n,q,b,c;				//bikin integernya dulu
	ll a[100001];				//pake array karena banyak
	ll i,j,k;
	scanf("%lld",&n);				//scan n/banyak orang
	getchar();
	
	for(i=0; i<n; i++){
		scanf("%lld",&a[i]);		//scan tingi n
		getchar();
	}
	
	scanf("%lld",&q);				//scan banyak atraksi
	getchar();
	
	for(j=0; j<q; j++){
		scanf("%lld %lld",&b,&c);		//scan min & max tinggi tiap atraksi
		getchar();
	
		ll count=0;					//dibikin 0 biar hitungannya pas
		for(i=0; i<n; i++){
			if(a[i]>c)break;		//kalo tinggi melebihi max maka break
			
			if(a[i]>=b && a[i]<=c){		//kalo tinggi ada di tengah antar min dan max maka
				count++;				//count bertambah
			}
		}	
			printf("Case #%lld: %lld\n",j+1,count);		//print case dan hasil
		
	}
	
	return 0;
}

/*
testcase
10
1 3 5 8 12 16 28 69 153 9999
8
1 3
1 5
1 199
4 500
152 152
70 152
153 153
153 9998
*/
