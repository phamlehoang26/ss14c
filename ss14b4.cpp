#include<stdio.h>
#include<string.h>
int main(){
	char so[50]="abcd";
    char ten;
    int a=0;
    printf("moi ban nhap : ");
    scanf("%c",&ten);
    
	int length = sizeof(so)/sizeof(char);
	
	for(int i=0;i<length -1;i++){
    if(so[i]==ten){
    	a++;
	}	
	}
	printf("so luong ptu la %d ",a);
	
	
	
	return 0;
}
