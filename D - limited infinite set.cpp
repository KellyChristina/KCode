#include<stdio.h>

int main(){
	int b,c,d,t,x,l,i,j;
	scanf("%d",&t);
	
    for(i=0; i<t; i++){
    	scanf("%d %d", &x, &l);
		
    	int a[l] = {0};	
    	a[x] = 1;
		int max = 0;
		
    	for(j=x; j<=l; j++){
    		if(a[j]==1){
	    		b=j*3;
	    		if(b<=l){
	    			a[b]=1;
	    			if(b>max){
	    				max=b;
		    		}
		       	}
		       	
	       		c=j*4;
	         	if(c<=l){
	    		    a[c]=1;
	    	    	if(c>max){
	    		    	max=c;
	    	    	}
	    	    }
	    	
    	    	d=j*5;
	           	if(d<=l){
	    		    a[d]=1;
		        	if(d>max){
			        	max=d;
		        	}
	        	}
    	    }
        }
	    printf("Case #%d: %d\n",i+1,max); max=0;
	}
	
	return 0;
}
