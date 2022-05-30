#include<stdio.h>

void f(int n, char s[]){
	for(int i=0; s[i]!='\0'; i++){
		if(s[i]==' '){    //if satu2 biar jelas datanya
			continue;
		}else if(s[i]=='0'){  
        	s[i]='O';
		}else if(s[i]=='1'){
        	s[i]='I';
		}else if(s[i]=='3'){
        	s[i]='E';
		}else if(s[i]=='4'){
        	s[i]='A';
		}else if(s[i]=='5'){
        	s[i]='S';
		}else if(s[i]=='6'){
        	s[i]='G';
		}else if(s[i]=='7'){
        	s[i]='T';
		}else if(s[i]=='8'){
        	s[i]='B';
		}
		
		char temp=s[i]-n; //temp = temporary
		if(temp<'A'){
			s[i]=temp+26;
		}else{
			s[i]=temp;
		}
	}
}

int main(){
	FILE *fp = fopen("testdata.in", "r");
    int t,n,i;
	char s[1001];
    fscanf(fp, "%d\n", &t);

    for(i=1; i<=t; i++){
        fscanf(fp, "%d\n", &n); //scanf banyak shift/pergerakan 
        fscanf(fp, "%[^\n]", s); //scanf text
        f(n, s);  //ambil data void f
        printf("Case #%d: %s\n", i, s);  //tinggal print
    }
    
    fclose(fp);
	return 0;
}
