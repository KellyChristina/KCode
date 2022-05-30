#include <stdio.h>

int main(){
	char n[5];
	scanf("%c %c %c %c %c",&n[0],&n[1],&n[2],&n[3],&n[4]);
	printf("-%c%c%c-\n",n[3],n[2],n[1]);
	return 0;
}
