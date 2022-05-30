#include <stdio.h>
#include <math.h>

int main ()
{
    long long int a, hasil;
    scanf("%lld",&a);
    
	hasil = pow(2,a);
	
    	if(hasil>1){
			hasil-=1;
		} 
		
    printf("%lld\n",hasil);
    
    return 0;
}
