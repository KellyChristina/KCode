//Problem B - Record Finder

#include<stdio.h>
#include<string.h>

struct data{        //data1
    char id[10];
    char name[35];
    int age;
    double balance;
}cus[1005];

struct data2{       //data2 (yang ditanya)
    char code[10];
}cus2[1005];

int main(){
    int n,m,i,j;
    int flag=0;     	//dikasi 0 biar ga kelebihan
    scanf("%d\n",&n);   //scanf banyak data1
    for(i=0; i<n; i++){
        scanf("%[^,],%[^,],%d,%lf",cus[i].id,cus[i].name,&cus[i].age,&cus[i].balance); 
        getchar(); 
    }
    
    scanf("%d\n",&m); 
    for(j=0; j<m; j++){
        scanf("%s",cus2[j].code);  
    }
    
    for(j=0; j<m ; j++){    
        for(i=0; i<n; i++){
            if(strcmp(cus2[j].code,cus[i].id)==0){  
                printf("%s %d %.2lf\n",cus[i].name,cus[i].age,cus[i].balance); 
                flag=0; 
                break;  
            }else{
                flag=1; 
            }
        }
            
		        if(flag==1){
		            printf("-1\n"); //printf -1 karena tidak ada data
		        }
    }  
    return 0;
}

/*
test case:
5
ANGE,Andrew Garfield,18,110933.25
HAIS,Spectra Vgeist,18,25000.00
NERA,Frankie,16,999999999.99
TION,Dorothy White,22,0.00
VVVV,Michael J,17,100000.00
3
NERA
JOLY
VVVV
*/
