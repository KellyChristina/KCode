//Prob A - Final Recursion

#include<stdio.h>

int F(int x){				//bikin rekrusinya
	if(x==0){				//Kalau X=0 maka return 0/ jawaban 0
		return 0;
	}else{ 					//Kalau x>0 maka pake rumus (F(x-1))+1
		return (F(x-1))+1; 
	}
}

int main(){
	int x;
	scanf("%d",&x);			//scanf inputannya (x)
	printf("%d\n",F(x));	//printf jawaban setelah direkursi
	
	return 0;
}
