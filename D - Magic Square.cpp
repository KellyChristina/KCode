#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g,h,i;
	scanf("%d %d %d %d",&a,&e,&i,&c);
	
	int num=a+e+i;
	b=num-a-c;
	g=num-c-e;
	h=num-g-i;
	f=num-c-i;
	d=num-a-g;
	
	printf("%d %d %d\n",a,b,c);
	printf("%d %d %d\n",d,e,f);
	printf("%d %d %d\n",g,h,i);
	
	return 0;
}
