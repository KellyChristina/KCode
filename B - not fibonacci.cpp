#include<stdio.h>

int fib(int a,int b,int c){
	int temp;
	while(c!=0){
		temp = b;
		b += a;
		a = temp;
		c--;
	}
	printf("%d\n", a);
}


int main(){
	int x,y,n;
	scanf("%d %d\n",&x,&y);
	scanf("%d",&n);
	fib(x,y,n);
	
	return 0;
}
