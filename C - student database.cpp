#include<stdio.h>

struct data{
	char id[300];
	char name[300];
	int age;
}student[1001];

int main(){
	int n,t,a;
	scanf("%d",&n);
	
	for(int i=0; i<n; i++){
		scanf("%s", &student[i].id);getchar();
		scanf("%[^\n]s", &student[i].name);getchar();
		scanf("%d", &student[i].age);getchar();
	}
	
	scanf("%d",&t);
	for(int i=0; i<t; i++){
		scanf("%d",&a);
		printf("Query #%d:\n", i+1);
		printf("ID: %s\n", student[a-1].id);
		printf("Name: %s\n", student[a-1].name);
		printf("Age: %d\n", student[a-1].age);
	}
}
