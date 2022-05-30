#include<stdio.h>

char fib(int n, char a, char b){
    if(n==0){
        printf("%c",a);
    }else if(n==1){
        printf("%c", b);
    }else{
        fib(n-1,a,b);
        fib(n-2,a,b);
    }
}

int main(){
    int t,n,i;
    char a,b;
    scanf("%d", &t);
    
    for (i=0; i<t; i++){
        scanf("%d %c %c",&n,&a,&b);
        printf("Case #%d: ",i+1);
        fib(n,a,b);
        printf("\n");
    }
    
    	return 0;
}
