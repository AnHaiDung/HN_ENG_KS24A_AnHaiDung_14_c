#include <stdio.h>

int main(){
	int length;
	int numChar=3;
	char text[]="an hai dung";
	printf("%s\n",text);
	printf("nhap so tu trong chuoi ");
	scanf("%d",&length);
	if(length==numChar){
		printf("dung");
	}else{
		printf("sai");
	}
	return 0;
}
