#include <stdio.h>

int F(int n){
	int F[n+1];
	F[0]=1;
	F[1]=2;

	for(int k=2;k<=n;k++){
		F[k]=0;
		if(k%3==0){
			F[k]=F[k-(k/3)]+1;
		}else{
			F[k]=F[k-1]+k+F[k-2]+1;
		}
	}
    	return F[n];
}

int C(int n){
	int F[n+1];
	int count[n+10];
	F[0]=1;
	F[1]=2;

	for(int i=2;i<=n;i++){
		count[i]=0;
		F[i]=0;
		if(i%3==0){
			F[i] = F[i-(i/3)]+ 1;
			if (F[i]==F[3]) count[i]+=1;
			else count[i] = count [i-(i/3)];
		}else{
			F[i] = F[i-1] + i + F[i-2] + 1;
			
			if (F[i]==F[4]) count[i]+=1;
			if(F[i-1]==F[3] || F[i-2]==F[3]) count[i]+=count[3];
			if(F[i-1]==F[4] || F[i-2]==F[4]) count[i]+=count[4];
			else if (i>4){
				count[i]+=count[i-1];
				count[i]+=count[i-2];
			}
		}
	}
	return count[n];
}

int main(){
    int t,n;
    scanf("%d",&t);
    
    for(int j=1; j<=t; j++){
    	scanf("%d",&n);
    	printf("Case #%d: %d %d\n",j,F(n),C(n));	
	}
	
    return 0;
}
