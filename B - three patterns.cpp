#include <stdio.h>

int main(){
	int kolom,baris,n,k;
	scanf("%d %d",&n,&k);
	
	
	for(kolom=1; kolom<=n; kolom++){
	for(baris=1; baris<=n; baris++){
		
		printf("#");
   }
   	printf ("\n");

}	printf ("\n");

	for(kolom=1; kolom<=n; kolom++){
	for(baris=1; baris<=n; baris++){
		
		if(kolom%k==0){
			printf("#");
			
		}else{
			printf(".");
			
		}
   }
   	printf ("\n");

}	printf ("\n");
	   	
	for(kolom=1; kolom<=n; kolom++){
	for(baris=1; baris<=n; baris++){
		
		if(baris%k==0){
			printf("#");
			
		}else{
			printf(".");
			
		}
   }
   
   	printf ("\n");
}

	return 0;
}
