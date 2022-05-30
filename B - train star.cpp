//Prob B - Train : Star

#include<stdlib.h>
#include<stdio.h>

int main(){
	int n,m,u,v;	
	int i,j;
	int x=0;
	scanf("%d %d",&n,&m); 	//scan banyak distrik dan banyak jalan
	getchar();			//spasi 
	
	int jal[n][n];		//jalannya pake 2 dimensi 
	for(i=0; i<n; i++){		//ini dipake untuk n 
		for(j=0; j<n; j++){
			jal[i][j]=0;
		}
	}
	
	if(n!=(m+1)){	//kalo n bukan m+1 maka x-nya 1
		x=1;
	}
	
		for(i=0; i<m; i++){
			scanf("%d %d",&u,&v); 	//scan jalannya
			getchar();
			if(x==0){				//kalau x-nya 0 maka,
				jal[v-1][u-1]++;	//dibikin 2 begini karena (u,v) dan (v,u) sama
				jal[u-1][v-1]++;
			}
		}
	
		if(x==1){				//kalo x-nya 1 maka,
			printf("NO\n");		//print no
			exit(0);			//harus pake exit 0 supaya ga RE
		}
	
			
			for(i=0; i<n; i++){
			int hit=0;					//hitung=0 disini supaya memastikan bahwa hit=0 (biar angka pas)
				for(j=0; j<n; j++){
					if(jal[i][j]==1){
						hit++;
					}
				}
				
				if(hit!=(n-1) && hit!=1){	//kalo hitung bukan n-1 & hit bukan 1 maka,
					printf("NO\n");			//print no
					exit(0);				//harus pake exit 0 supaya ga RE
				}
			}
	
		printf("YES\n");	//print yes (jadi kalo udah ikut diatas tapi masih benar maka print yes
	
	return 0;
}

/*
test case
4 3
3 1
2 3
4 3
*/
