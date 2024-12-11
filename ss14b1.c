#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("moi ban nhap chu ");
	fgets(c,1000,stdin);
	scanf("%s",c);
	printf("chu ban vua nhap la %s\n",c);
	strlen(c);
	printf("co do dai la %d\n",strlen(c));
	
	
	return 0;
}
