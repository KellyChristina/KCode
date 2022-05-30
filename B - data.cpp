#include<stdio.h>
#include<string.h>
	
int main(){
	int t,n,i,j,k,temp;
	int number[105];
	char name[105][105];
	char sort[105];
	scanf("%d\n",&t); //scanf testcase
	
	for(i=1;i<=t;i++){
		scanf("%d\n",&n); //scanf banyak data

		for(j=0;j<n;j++){
			scanf("%[^#]#%d\n",&name[j],&number[j]); //scanf isi data
		}
		
		for(j=0;j<n;j++){ //proses sort
			for(k=j+1;k<n;k++){
				if (number[j]>number[k]){
					temp=number[j];
					number[j]=number[k];
					number[k]=temp;
					strcpy(sort,name[j]);
					strcpy(name[j],name[k]);
					strcpy(name[k],sort);
					
				}else if(number[j]==number[k]){
					if(strcmp(name[j],name[k])>0){
						strcpy(sort,name[j]);
						strcpy(name[j],name[k]);
						strcpy(name[k],sort);
		 			}
				}  
			}
		}
			printf("Case #%d:\n",i); //print tc/test case
			
		for(j=0;j<n;j++){
			printf("%s - %d\n",name[j],number[j]);  //print hasilnya yang sudah diganti 
		}
	}
	return 0;
}
