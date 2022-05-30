#include <stdio.h>

typedef long long int ll;
ll p(ll n){
    ll f=1;
    if(n==0||n==1){
        return 1;
    }
    for(ll i=2;i<=n;i++){
        f*=i;
    }
    return f;
}

ll plus(ll a[],ll n){
    ll f=p(n), d=0;
    for(ll i=0;i<n;i++){
        d+=a[i];
    }
    d*=(f/n);
    ll hasil=0;
    for(ll j=1,k=1;j<=n;j++) {
        hasil +=(k*d);
        k*=10;
    }
    return hasil;
}

int main(){
    ll n, t;
    scanf("%lld", &t);
    for(ll l=0; l<t; l++){
        scanf("%lld", &n);
        	printf("Case #%lld: ",l+1);
        		
        ll a[n];
        for(ll m=0; m<n; m++)
            scanf("%lld",&a[m]);
                printf("%lld\n",plus(a,n));
    }
    return 0;
}
