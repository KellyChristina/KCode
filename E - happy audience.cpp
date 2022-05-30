#include<stdio.h>

int move(int vip[], int norm[], int tot, int n, int max){
	int temp=0;
	int temp2=0;
	int i,j;
	
	if(tot==0){
		return max;
	}
	
	temp=norm[0];
	for(i=0; i<n-1; i++){
		norm[i]=norm[i+1];
	}
	
	norm[n-1]=temp;
	temp2=0;
	for(j=0; j<n; j++){
		if(vip[j]<norm[j]){
			temp2++;
		}
	}
	
	if(temp2>max){
		max=temp2;
	}
		move(vip,norm,tot-1,n,max);
}

int main(){
	int t, n, vip[1005], norm[1005], max=0;  //vip = height vip ,norm = height regular
	scanf("%d",&t);
	
	for(int i=0; i<t; i++){
		scanf("%d",&n);
		
		for(int j=0; j<n; j++){
			scanf("%d",&vip[j]);
		}
		
    		for(int k=0; k<n; k++){
    			scanf("%d",&norm[k]);
    		}
		
        		int max=move(vip, norm, n, n, 0);
        		printf("Case #%d: %d\n", i+1, max+n);max=0;
	}
	    return 0;
}
