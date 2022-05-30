#include <stdio.h>

int T(int n){
    if(n==0){
        return 0;
    }else if(n==1){
    	return 1;
	}else{
        return 2*n+(T(n-1))+(T(n-2));
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", T(n));
    return 0;
}
