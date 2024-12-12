#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[]="jehftr9y$&%465";
	int countCharacterText=0;
	int length=strlen(chuoi);
	for(int i=0;i<length;i++){
		if(chuoi[i]>='a'&&chuoi[i]<='z'){
			countCharacterText++;
		}
		if(chuoi[i]>='A'&&chuoi[i]<='Z'){
			countCharacterText++;
		}
	}
	printf("so ki tu la chu cai la : %d",countCharacterText);
	
	return 0;
}
