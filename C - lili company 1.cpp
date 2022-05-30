#include<stdio.h>
#include<string.h>

struct data{
	char nama[200];
	char gender[200];
	char bag[200];
	int stat; //ket: 0=inactive, 1=active, 2=pensiun
}em[101]; //em=employee

void swap(char x[], char y[]){
	char temp[200];
	strcpy(temp,x);
	strcpy(x,y);
	strcpy(y,temp);
}

int main(){
	int n,i,j,k, pos=0;
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		int t;
		scanf("%d",&t);
		switch(t){
			case 1:{
				for(j=0; j<101; j++){
					if(strcmp(em[j].nama,"")==0){
						scanf("%s",em[j].nama);
						scanf("%s",em[j].gender);
						scanf("%s",em[j].bag);
						em[j].stat=1;
						break;
					}
				}
				int cocok=0;
				for(k=0; k<101; k++){
					if(strcmp(em[j].nama,em[k].nama)==0 && j!=k){
						cocok++;
						strcpy(em[j].nama,"");
						strcpy(em[j].gender,"");
						strcpy(em[j].bag,"");
						em[j].stat=0;
						break;
					}
				}
				break;
			}
			
			case 2:{
				int a=0,b=0;
				scanf("%d %d",&a,&b);
				if(strcmp(em[a-1].nama,"")==0||strcmp(em[b-1].nama,"")==0){
					break;
				}else if(em[a-1].stat==2||em[b-1].stat==2){
					break;
				}else{
					swap(em[a-1].nama,em[b-1].nama);
					swap(em[a-1].gender,em[b-1].gender);
					swap(em[a-1].bag,em[b-1].bag);
				}				
				break;
			}
			
			case 3:{
				int has=0;
				scanf("%d",&has);
				strcpy(em[has-1].nama,"");
				strcpy(em[has-1].gender,"");
				strcpy(em[has-1].bag,"");
				em[has-1].stat=0;
				break;
			}
			
			case 4:{
				int bal=0;
				scanf("%d",&bal);
				em[bal-1].stat=2;
				break;
			}
		}
	}
	
	for(int i=0; i<101; i++){
		if(em[i].stat==true){
			printf("%s\n",em[i].nama);
		}
	}
	return 0;
}
