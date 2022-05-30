//Prob E - JoNumber

#include<stdio.h>
typedef long long int ll;

ll JoNumber(ll n){
    return n*(n+1)*(n+2)/3;
}

ll search(ll i, ll a, ll b, ll c){
    if(c<b){
        return -1;
    }
    
    ll d=(b+c)/2;
    if(JoNumber(d)+i==a && JoNumber(d)!=0){
        return 1;
    }else if(JoNumber(d)+i>a){
        search(i, a, b, d-1);
    }else if(JoNumber(d)+i>a){
        search(i, a, d+1, c);
    }
}

bool res(ll x){
    ll z=0;
    ll i;
    for(i=0; i<=1001; i++){
        z=search(JoNumber(i),x,0,1001);
            
            if(z==1 || JoNumber(i)>x){
                break;
            }
    }
    
    if(z==-1){
        return false;
    }else{
        return true;
    }
}

int main(){
	ll t,x,n,i;
	scanf("%lld",&t);
	
	for(i=0; i<t; i++){
		scanf("%lld",&x);
	
    	printf("Case #%lld: ",i+1);
    	
        if(res(x)==true){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
	}
	return 0;
}

/*
test case
2
10
11
*/
