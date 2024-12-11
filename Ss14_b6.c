#include <stdio.h>

int main(){
	int length;
	int Char=9;
	char text[]="an hai dung 06 07 2006";
	printf("%s\n",text);
	printf("nhap so ky tu la chu cai trong chuoi ");
	scanf("%d",&length);
	if(length==Char){
		printf("dung");
	}else{
		printf("sai");
	}
	return 0;
}
