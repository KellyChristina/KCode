#include<stdio.h>

int fibo (int);

int main (){
	long long int t,i,j,a,l,r,hasil[100];
	scanf("%lld",&t);
	
	for(i=1; i<=t; i++){
		scanf("%lld %lld",&l,&r);
		hasil[i]=0;
		
		if(l<r){
			for(j=l; j<=r; j++){	
				a=fibo(j);
				while(a!=0){ 
     				hasil[i]=hasil[i]+a%10; 
     				a=a/10; 
    			}  
			}
		}
		else if(l==r){
			j=l;
			a=fibo(j);
			while(a!=0){ 
     			hasil[i] = hasil[i] + a%10; 
     			a=a/10; 
   			} 			
		}
	}
	
	for(i=1; i<=t; i++){
		printf("Case #%lld: %lld\n",i,hasil[i]);
	}
	return 0;
}

int fibo(int j){
	if (j==0){
		return 0;
	}
	else if (j==1){
		return 1;
	}
	else{
		return(fibo(j-1)+fibo(j-2));
	}
}
