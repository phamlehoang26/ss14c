#include<stdio.h>
#include<string.h>
int main(){
	char name[50];
	printf("moi ban nhap ten cua ban :");
    fgets(name,50,stdin);
    
    int length=strlen(name);
    if(name[length-1]){
    	(name[length-1]=='\0');
    	length--;
	}
	
	printf("ten dao nguoc la : ");
    for(int i=length-1;i>=0;i--){
    	printf("%c",name[i]);
	}
	printf("\n");
	
	

	
	
	return 0;
}
