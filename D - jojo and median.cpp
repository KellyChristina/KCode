#include <stdio.h>

struct data{
    char id[1001];
    char name[1001];
    unsigned long long int price;
}info[100001];

int main(){
    unsigned long long int n,mid,i,j;
    scanf("%llu",&n);
    
    for(i=0; i<n; i++){
        getchar();
        scanf("%[^\n]", info[i].id);getchar();
        scanf("%[^\n]", info[i].name);getchar();
        scanf("%llu", &info[i].price);
    }
    
    mid=n/2;
    for(j=0; j<n; j++){
        if(info[j].price>=info[mid].price){
            printf("%s %s\n",info[j].id,info[j].name);
        }
    }
    
    return 0;
}
