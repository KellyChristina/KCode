#include <stdio.h>

int main(){
	int N,S,A,B,C;
	scanf("%d %d %d %d %d", &N,&S,&A,&B,&C);
	int X=(A/S)*(B/S)*(C/S);
	
	if(N%X==0){
		int hasil=N/X;
		printf("%d\n",hasil);
	}else {
		int hasil=(N/X)+1;
		printf("%d\n",hasil);
	}


	return 0;
}
