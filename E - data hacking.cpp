#include<stdio.h>
#include<string.h>
#include<math.h>

struct data{
	char nama[27];
	int gb1, gb2, gb3; //gb=gaji bulanan
}em[200]; //em=employee

struct data2{
	int jenis,a,b;
}order[200]; //order=perintah yg diminta

int main(){
	int t,bd,bo,i,j,k,l,m,n,temp; //bd=banyaknya data , bo=banyaknya perintah
	scanf("%d\n", &t);
	
	for(int tc=0; tc<t; tc++){
		scanf("%d %d\n", &bd, &bo);
		
		for(i=1; i<=bd; i++){
			scanf("%s %d %d %d\n", em[i].nama, &em[i].gb1, &em[i].gb2, &em[i].gb3);
		}
		
    		for(j=1; j<=bo; j++){
    			scanf("%d %d %d\n", &order[j].jenis, &order[j].a, &order[j].b);
    		}
		
        		for(k=bo; k>=1; k--){
        			if(order[k].jenis == 1){
        				for(l=order[k].a, m=order[k].b; l<=m; l++, m--){
        					temp = em[l].gb1;
        					em[l].gb1 = em[m].gb1;
        					em[m].gb1 = temp;
        					temp = em[l].gb2;
        					em[l].gb2 = em[m].gb2;
        					em[m].gb2 = temp;
        					temp = em[l].gb3;
        					em[l].gb3 = em[m].gb3;
        					em[m].gb3 = temp;
        				}
        			}else{
        				for(n=order[k].a; n<=order[k].b; n++){
        					temp=em[n].gb3;
        					em[n].gb3 = em[n].gb2;
        					em[n].gb2 = em[n].gb1;
        					em[n].gb1 = temp;
        				}
        			}
        		}
        		printf("Case #%d:\n", tc+1);
        		
            		for(i = 1; i <= bd; i++){
            			printf("%s %d\n",em[i].nama,em[i].gb3);
            		}
	}
	    return 0;
}
