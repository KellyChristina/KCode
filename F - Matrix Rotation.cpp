#include <stdio.h>

int main(){
	char n[9];
	scanf("%c %c %c\n", &n[0],&n[1],&n[2]);
	scanf("%c %c %c\n", &n[3],&n[4],&n[5]);
	scanf("%c %c %c", &n[6],&n[7],&n[8]);
	
	printf("  %c\n",n[0]);
	printf(" %c %c\n",n[3],n[1]); 
	printf("%c %c %c\n",n[6],n[4],n[2]); 
	printf(" %c %c\n",n[7],n[5]); 
	printf("  %c\n",n[8]); 
	
	return 0;
}
