#include<stdio.h>
#include<string.h>

struct data{
	int id;
	char jd[11]; //judul
	char pen[11]; //penulis
}lili[50001],bibi[50001],buku[50001];

int main(){
	int t,a,b,i,j,k,hit=0;
	scanf("%d",&t);
	
	for(i=0; i<t; i++){
		scanf("%d",&a);
		for(j=0; j<a; j++){
			scanf("%d %s %s",&lili[j].id,lili[j].jd,lili[j].pen);
		}
		
		scanf("%d",&b);
		for(j=0; j<b; j++){
			scanf("%d %s %s",&bibi[j].id,bibi[j].jd,bibi[j].pen);
		}
		
		int hit2,hit3=0,tot;
		tot=a+b;
		printf("Case #%d:\n",i+1);
		int x=0,y=0;
		for(k=0; k<tot; k++){
			if(x==a){
				printf("%d\n",k+1);
				y++;
			}else if(y==b){
				y++;
			}else if(lili[x].id>bibi[y].id){
				printf("%d\n",k+1); 
				y++;
			}else if((lili[x].id==bibi[y].id) && strcmp(bibi[y].jd,lili[x].jd)<0){ 
				printf("%d\n",k+1); //kalo sama dan judul lbh kecil + id lbh kecil
				y++;
			}else{
				x++;
			}
		}
	}
	return 0;
}
