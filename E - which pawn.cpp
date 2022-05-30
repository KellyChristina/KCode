#include<stdio.h>

int main(){
    int a,b,c,cb[400][400],cost,x,y;
    int i,j,k,l,col,row;
    int knight=0, bishop=0, rook=0;
    //cb papan catur
	//a ukuran papan; b banyak bidak;
	//c jumlah posisi yang dicoba
	//x,y posisi yang akan dicoba 
	
    scanf("%d %d",&a,&b);getchar(); //ukuran papan catur dan banyak bidak 
    	cb[a][a];
    	
    for(i=1; i<=b; i++){ //posisi awal
        scanf("%d %d",&x,&y);getchar();
        cb[x][y]=1;
    }
    
    scanf("%d",&c);getchar(); //percobaan
    
    for(j=1; j<=c; j++){
        scanf("%d %d",&row, &col);getchar();
        
    //rook
    	for(l=row, k=col; l>=1; l--){
    		if(cb[l][k]==1){
    			rook++;
    			break;
			}
		}
		
        for(l=row, k=col; k>=1; k--){
    		if(cb[l][k]==1){
    			rook++;
    			break;
			}
		}    	
		
		for(l=row, k=col; l<=a; l++){
    		if(cb[l][k]==1){
    			rook++;
    			break;
			}
		}    	
		
		for(l=row, k=col; k<=a; k++){
    		if(cb[l][k]==1){
    			rook++;
    			break;
			}
		} 
    
    
    //bishop
    	for(l=row,k=col; l>=1&&k<=a; k++,l--){
    		if(cb[l][k]==1){
    			bishop++;
    			break;
			}
		}
		
		for(l=row,k=col; l<=a&&k>=1; k--,l++){
    		if(cb[l][k]==1){
    			bishop++;
    			break;
			}
		}
		
    	for(l=row,k=col; l<=a&&k<=a; k++,l++){
    		if(cb[l][k]==1){
    			bishop++;
    			break;
			}
		}
		
    	for(l=row,k=col; l>=1&&k>=1; k--,l--){
    		if(cb[l][k]==1){
    			bishop++;
    			break;
			}
		}
		
		
    //knight
        if(row-1>=1 && col-2>=1 && cb[row-1][col-2]==1)knight++;
        if(row-2>=1 && col-1>=1 && cb[row-2][col-1]==1)knight++;
        if(row+1<=a && col+2<=a && cb[row+1][col+2]==1)knight++;
        if(row+2<=a && col+1<=a && cb[row+2][col+1]==1)knight++;
        if(row-1>=1 && col+2<=a && cb[row-1][col+2]==1)knight++;
        if(row+1<=a && col-2>=1 && cb[row+1][col-2]==1)knight++;
        if(row+2<=a && col-1>=1 && cb[row+2][col-1]==1)knight++;
        if(row-2>=1 && col+1<=a && cb[row-2][col+1]==1)knight++;
        
			if(knight>=bishop && knight>=rook){
				cost=1;
			} else if(bishop>=knight && bishop>=rook){
				cost=2;
			} else cost=3;
    			printf("%d\n",cost);
    			rook=0; bishop=0; knight=0;
	}
    return 0;
}
